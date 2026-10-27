#include <iostream>
#include <cstring>
using namespace std;

// DEMONSTRATING THE PROBLEM: Without a proper copy constructor (shallow copy)
class PersonWithoutCopyConstructor {
private:
    string name;
    int *age;

public:
    // Constructor to initialize Person with a name and age
    PersonWithoutCopyConstructor(string n, int a) {
        age = new int(a);  // Allocate memory for age
        name = n;
        cout << "Constructor called for " << name << " (age ptr at: " << age << ")" << endl;
    }

    // NO COPY CONSTRUCTOR DEFINED - will use default shallow copy!
    // This means both objects will point to the SAME age pointer

    // Destructor to clean up dynamically allocated memory
    ~PersonWithoutCopyConstructor() {
        cout << "Destructor called for " << name << " (deleting ptr at: " << age << ")" << endl;
        delete age;  // PROBLEM: If two objects share the same pointer, this will delete twice!
    }

    // Function to display the person's details
    void display() const {
        cout << "  Name: " << name << ", Age: " << *age << " (ptr: " << age << ")" << endl;
    }

    void setBirthday() {
        (*age)++;  // Increment age
    }

    void setAge(int newAge) {
        *age = newAge;
    }
};


// SOLUTION: With a proper copy constructor (deep copy)
class PersonWithCopyConstructor {
private:
    string name;
    int *age;

public:
    // Constructor to initialize Person with a name and age
    PersonWithCopyConstructor(string n, int a) {
        age = new int(a);  // Allocate memory for age
        name = n;
        cout << "Constructor called for " << name << " (age ptr at: " << age << ")" << endl;
    }

    // COPY CONSTRUCTOR (deep copy)
    // Each copy gets its own allocated memory
    PersonWithCopyConstructor(const PersonWithCopyConstructor& other) {
        name = other.name;
        age = new int(*other.age);  // Allocate NEW memory and copy the VALUE
        cout << "Copy constructor called for " << name << " (NEW age ptr at: " << age << ")" << endl;
    }

    // Destructor to clean up dynamically allocated memory
    ~PersonWithCopyConstructor() {
        cout << "Destructor called for " << name << " (deleting ptr at: " << age << ")" << endl;
        delete age;  // Safe to delete - each object has its own memory
    }

    // Function to display the person's details
    void display() const {
        cout << "  Name: " << name << ", Age: " << *age << " (ptr: " << age << ")" << endl;
    }

    void setBirthday() {
        (*age)++;  // Increment age
    }

    void setAge(int newAge) {
        *age = newAge;
    }
};


int main() {
    // cout << "=============================================" << endl;
    // cout << "PROBLEM: WITHOUT COPY CONSTRUCTOR (Shallow Copy)" << endl;
    // cout << "=============================================" << endl;
    // {
    //     PersonWithoutCopyConstructor person1("Alice", 25);
    //     person1.display();

    //     // Create a copy - uses DEFAULT shallow copy!
    //     PersonWithoutCopyConstructor person2 = person1;  // Default copy constructor
    //     person2.display();

    //     cout << "\nNotice: Both objects point to the SAME age memory!" << endl;
    //     cout << "Modifying person1's age..." << endl;
    //     person1.setBirthday();
    //     person1.display();
    //     person2.display();
    //     cout << "BOTH changed! They share the same pointer!" << endl;

    //     cout << "\nModifying person2's age..." << endl;
    //     person2.setAge(50);
    //     person1.display();
    //     person2.display();
    //     cout << "BOTH changed again! This is dangerous!" << endl;
    // }
    // // When the scope ends, both destructors run and try to delete the SAME pointer
    // // This causes a DOUBLE FREE ERROR (exit code 134 - SIGABRT)
    // cout << "\n==> DOUBLE FREE ERROR OCCURRED when destructors ran!" << endl;

    cout << "\n\n=============================================" << endl;
    cout << "SOLUTION: WITH COPY CONSTRUCTOR (Deep Copy)" << endl;
    cout << "=============================================" << endl;
    {
        PersonWithCopyConstructor person1("Bob", 30);
        person1.display();

        // Create a copy - uses our deep copy constructor!
        PersonWithCopyConstructor person2 = person1;  // Our copy constructor
        person2.display();

        cout << "\nNotice: Each object has its OWN age memory!" << endl;
        cout << "Modifying person1's age..." << endl;
        person1.setBirthday();
        person1.display();
        person2.display();
        cout << "Only person1 changed! They are independent!" << endl;

        cout << "\nModifying person2's age..." << endl;
        person2.setAge(50);
        person1.display();
        person2.display();
        cout << "Only person2 changed! Safe and predictable!" << endl;
    }
    // Destructors run safely - each object deletes its OWN memory
    cout << "\n==> No errors! Each object cleaned up its own memory." << endl;

    return 0;
}
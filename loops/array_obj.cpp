#include<iostream>
#include<string>

using namespace std;

class Person {
    private:
    string name;
    int age;
    public:
        Person(string name, int age) {
            this->name = name;
            this->age = age;
        }
        Person(): Person("Harry", 12){}
        string getName() {
            return name;
        }
        int getAge() {
            return age;
        }
};

int main() {
    string names[] = {"John", "Mary", "Carlos", "Ben", "Jil"};
    int ages[] = {12, 45, 32, 56, 89};

    Person people[5] = {Person("Ben", 12), Person("Jil", 34)};

    for(int i = 0; i < 5; i ++) {
        people[i] = Person(names[i], ages[i]);
    }

    for(int i = 0; i < 5; i ++) {
        cout << "Person: " << people[i].getName() << " (" << people[i].getAge() << ")\n";
    }
    
}
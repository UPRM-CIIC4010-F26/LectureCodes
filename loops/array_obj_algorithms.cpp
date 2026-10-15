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

Person getOldestPerson(Person people[], int size) {
    Person oldest = people[0];
    for(int i =0; i < size; i++) {
        if(oldest.getAge() < people[i].getAge())
            oldest = people[i];
    }
    return oldest;
}

float getAverageAge(Person people[], int size) {
    float sum = 0;
    for(int i = 0; i < size; i++) {
        sum += people[i].getAge();
    }
    return sum/size;
}

int main() {
    string names[] = {"John", "Mary", "Carlos", "Ben", "Jil", "Zeke"};
    int ages[] = {12, 45, 73, 56, 65, 32};

    Person people[5];

    for(int i = 0; i < 6; i ++) {
        people[i] = Person(names[i], ages[i]);
    }

    for(Person person: people) {
        cout << "Person: " << person.getName() << " (" << person.getAge() << ")\n";
    }

    Person oldest = getOldestPerson(people, 5);
    cout << "Oldest person: " << oldest.getName() << " (" << oldest.getAge() << ")\n";
    cout << "Average age: " << getAverageAge(people, 5) << endl;


    Person minName = people[0];
    for(int i = 1; i < 6; i++) {
        if(minName.getName() > people[i].getName())
            minName = people[i];
    }
    cout << "The person with the smallest name (alphabetically) is: " << minName.getName() << endl;

    // Print the position of the oldest person
    // Person oldestPerson = people[0];
    int pos = 0;
    for(int i = 1; i < 6; i++) {
        if(people[pos].getAge() < people[i].getAge()){
            pos = i;
        }
    }
    cout << "The oldest Person is: " << people[pos].getName() << endl;
    
}
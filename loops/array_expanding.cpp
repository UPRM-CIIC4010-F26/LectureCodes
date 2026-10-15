#include<iostream>

using namespace std;

int main() {
    int size = 8;
    int numbers[size];

    for(int i = 0; i < 8; i++) {
        numbers[i] = i + 1;
    }

    for(int i: numbers)
        cout << i << " ";
    cout << endl;
    // Expanding array
    int numbersExpanded[size * 2];

    for(int i = 0; i < size * 2; i++) {
        if(i < size)
            numbersExpanded[i] = numbers[i];
        else 
            numbersExpanded[i] = -1;
    }

    for(int i: numbersExpanded)
        cout << i << " ";
    cout << endl;

    int value = 45;
    int pos = 5;

    // Adding a value at pos
    cout << "--------Adding a value" << endl;
    for(int i = size; i > pos; i--) {
        numbersExpanded[i] = numbersExpanded[i - 1];
        for(int i: numbersExpanded)
            cout << i << " ";
        cout << endl;
    }
    numbersExpanded[pos] = value;
    size++;
    for(int i: numbersExpanded)
        cout << i << " ";
    cout << endl;

    int positionToRemove = 3;
    cout << "--------Removing a value" << endl;
    for(int i = positionToRemove; i < size; i++) {
        numbersExpanded[i] = numbersExpanded[i + 1];
        for(int i: numbersExpanded)
            cout << i << " ";
        cout << endl;
    }
    size--;

}
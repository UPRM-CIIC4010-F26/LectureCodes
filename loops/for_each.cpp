#include<iostream>
#include<string>

using namespace std;

int main() {
    string names[] = {"John", "Mary", "Carlos", "Ben", "Jil"};

    for(string name: names) {
        for(char c: name) {
            cout << c << " ";
        }
        cout << endl;
    }
}
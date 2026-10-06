#include<iostream>
#include<string>

using namespace std;

int main() {
    string names[] = {"John", "Mary", "Carlos", "Ben", "Jil"};

    int size_arr = sizeof(names)/sizeof(string);
    cout << size_arr << endl;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < names[i].length(); j++) {
            cout << names[i][j] << " ";
        }
        cout << endl;
    }
}
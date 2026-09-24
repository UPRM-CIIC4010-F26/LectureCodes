#include<iostream>
#include<string>
using namespace std;

bool isEven(int x) {
    if(x % 2 == 0){
        cout << "This even" << endl;
        return true;
    }
    cout << "This odd" << endl;
    return false;
}


int main() {
    int x = 92;
    cout << boolalpha;
    cout << "Is x even? " << isEven(x);
    cout << "Is x + 1 even? " << isEven(x + 1);
    
}
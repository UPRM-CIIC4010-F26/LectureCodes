#include<iostream>
#include<string>

using namespace std;

// Swap the values of a and b
// If a = 10 and b = 5
// After swap a = 5 and b = 10
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;

    cout << "a = " << a << " and b = " << b << endl;
}

int main() {
    int a = 10;
    int b = 5;
    cout << "Before: a = " << a << " and b = " << b << endl;
    swap(a, b);
    cout << "After a = " << a << " and b = " << b << endl;
}
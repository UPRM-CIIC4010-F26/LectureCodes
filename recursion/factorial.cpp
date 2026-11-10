#include<iostream>

using namespace std;

// Calculates n! recusively
double factorial(int n) {
    if(n <= 1)
        return 1;
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n = 5;

    cout << "Factorial for " << n << " is: " << factorial(n) << endl;
}
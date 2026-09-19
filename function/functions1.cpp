#include<iostream>
#include<string>

using namespace std;

double sum(double, double);
// int sum(int, int);
int sum(int , int, int);
// int globalVar = 3;
int a = 9;
int main() {
    int d = 0;
    if(d == 0) {
        int localVar = 10;
        cout << localVar << endl;
    }
    cout << "Sum 2 integer: " << sum(12, 3) << endl;
    // globalVar++;
    cout << "Sum 3 integer: " << sum(12, 6, 4) << endl;
    cout << "Sum 2 doubles: " << sum(12.5, 6.0) << endl;
}

int sum(int a, int b, int c=0) {
    // cout << "Global in sum: " << globalVar<<endl;
    return a + b + c;

}



double sum(double a, double b) {
    return a + b;
}
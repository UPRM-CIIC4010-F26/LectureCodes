#include<iostream>
#include<cmath>

using namespace std;

int main() {
    float a, b, c;

    cout << "What are sides A, B, and C" << endl;
    cin >> a >> b >> c;
    // cout << "What is side B?" << endl;
    // cin >> b;
    // cout << "What is side C?" << endl;
    // cin >> c;

    float s = (a + b + c)/2;

    float A = sqrt(s * (s-a) * (s-b) * (s-c));

    cout << "Area is: " << A;
}
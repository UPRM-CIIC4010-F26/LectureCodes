#include<iostream>
#include<string>
#include<cmath>
#include<cctype>

using namespace std;

int main() {
    string str = "Hello World World2";
    string str2 = "this";
    cout << str << endl;
    int position = str.find("World");
    str.replace(position + 1, str2.length(), str2);
    cout << str << endl;
}
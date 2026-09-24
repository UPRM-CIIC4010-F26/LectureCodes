#include<iostream>
#include<string>
using namespace std;


int main() {
    string str1 = "hello";
    string str2 = "zebra";

    string str3 = (str1 < str2) ? str1: str2;
    cout << "This is the smallest string: " << str3;
    
}
#include<iostream>
#include<string>
using namespace std;


int main() {
    float x = 10.49999;
    float error = 0.001;
    if(x >= (10.5 - error) && x <= (10.5 + error)){
        cout << "This is a valid value! " << x << endl;
    }
    else{
        cout << "This is an invalid value! " << x << endl;
    }
    
}
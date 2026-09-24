#include<iostream>
#include<string>

using namespace std;

int main() {
    float score = 100;

    if(score >= 90)
        cout << "You get an A!" << endl;
    else if(score >= 80)
        cout << "You get an B" << endl;
    else if(score >= 70)
        cout << "You get an C" << endl;
    else if(score >= 60)
        cout << "You get an D" << endl;
    else
        cout << "You get an F! :(" << endl;
    
}
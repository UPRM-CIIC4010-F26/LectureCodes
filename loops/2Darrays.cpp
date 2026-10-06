#include<iostream>
#include<string>

using namespace std;

int main() {
    int board[3][3] = {{2, 3, 4},
                     {5, 6, 7},
                     {8, 9, 1}};
    
    for(int col = 0; col < 3; col++){
        for(int row = 0; row < 3; row++) 
            cout << board[row][col] << " ";
        cout << endl;
    }
}
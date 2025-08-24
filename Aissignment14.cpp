/*
A
B B
C C C
D D D D
E E E E E
*/

#include<iostream>
using namespace std;

int main(){


    
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int j = i; j < rows; j++) {
            cout << "  ";
        }

        int num = i;

        // Increasing numbers
        for (int k = 1; k <= i; k++) {
            cout << num << " ";
            num++;
        }

        num -= 2; // Go back for decreasing part

        // Decreasing numbers
        for (int k = 1; k < i; k++) {
            cout << num << " ";
            num--;
        }

        cout << endl;
    }

}


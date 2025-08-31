

#include<iostream>
using namespace std;

int main(){
    int rows = 5;

    for (int i = 0; i < rows; i++) {
        int num = 1; // First number in each row

        // Print leading spaces
        for (int j = 0; j < rows - i - 1; j++) {
            cout << "  ";
        }

        // Print numbers in the row
        for (int j = 0; j <= i; j++) {
            cout << num << "   ";
            num = num * (i - j) / (j + 1); // next number
        }

        cout << endl;
    }    
}
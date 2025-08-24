

#include<iostream>
using namespace std;

int main(){
    int rows = 5;       // Number of rows
    int lettersInRow = 1; // Start with 1 letter in first row

    for (int i = 1; i <= rows; i++) {
        // Print leading spaces for alignment
        for (int j = i; j < rows; j++) {
            cout << "  ";
        }

        char ch = 'A';

        // Print letters in the current row
        for (int j = 1; j <= lettersInRow; j++) {
            cout << ch << " ";
            ch++;
        }

        cout << endl;
        lettersInRow += 2; // Increase letters by 2 in next row
    }
}

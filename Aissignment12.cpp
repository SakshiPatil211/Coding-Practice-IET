

#include<iostream>
using namespace std;

int main(){
    int rows = 5;  // You can change this for more rows

    for (int i = rows; i >= 1; i--) {
        // Leading spaces (2 spaces per shift for proper alignment)
        for (int j = rows; j > i; j--) {
            cout << "  ";
        }

        // Stars with space
        for (int k = 1; k <= (2*i - 1); k++) {
            cout << "* ";
        }

        cout << endl;
    }
    
}





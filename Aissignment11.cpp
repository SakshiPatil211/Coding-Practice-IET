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
    int k =64;
    for(int i=0;i<6;i++){
        for(int j=0;j<i;j++){
            cout<<char(k)<<"\t";
        }
        k++;
        cout<<endl;
    }
}
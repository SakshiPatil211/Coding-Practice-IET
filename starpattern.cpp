#include<iostream>
using namespace std;

int main(){

    //Left half pyramid

    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;

    
    for(int i=1;i<=5;i++){
        int c=65;
        for(int j=1;j<=i;j++){
            cout<<char(c)<<"\t";
            c++;
        }
        cout<<endl;
    }
    cout<<endl;


    //Right half pyramid
    // int rows =5;
    // for(int i=1;i<=rows;i++){
    //     for(int j=i;j<rows;j++){
    //         cout<<" ";
    //     }
    //     for(int k=1;k<=i;k++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;

    // int rows =5;
    // for(int i=1;i<=rows;i++){
    //     for(int j=i;j<rows;j++){
    //         cout<<" ";
    //     }
    //     for(int k=1;k<=i;k++){
    //         cout<<k;
    //     }
    //     cout<<endl;
    // }

    // int rows =5;
    // for(int i=1;i<=rows;i++){
    //     for(int j=i;j<rows;j++){
    //         cout<<" ";
    //     }
    //     for(int k=1;k<=i;k++){
    //         cout<<i;
    //     }
    //     cout<<endl;
    // }

    int rows =5;
    for(int i=1;i<=rows;i++){
        for(int j=i;j<rows;j++){
            cout<<" ";
        }
        int c=65;
        for(int k=1;k<=i;k++){
            cout<<char(c);
            c++;
        }
        cout<<endl;
    }

}
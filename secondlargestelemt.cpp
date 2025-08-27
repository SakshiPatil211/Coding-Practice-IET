#include<iostream>
using namespace std;

// int largestindex(int a[],int n){
//     int max = a[0];
//     int maxIndex=-1;
//     for(int i=1;i<n;i++){
//         if(max<a[i]){
//             max = a[i];
//             maxIndex  = i;
//         }
//     }
//     return maxIndex;
// }

// int main(){
//     int n;
//     cout<<"enter the size of the array\n";
//     cin>>n;

//     int a[n];

//     cout<<"Enetr the elemts of array\n";
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }

//     cout<<"Dispaly the elements\n";
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<"\t";
//     }

//     cout<<endl;

//     int maxIndex = largestindex(a,n);

//     cout<<a[maxIndex]<<endl;
//     int max = a[maxIndex];
//     for(int i=0;i<n;i++){
//         if(max==a[i]){
//             a[i]=-1;
//         }
//     }

//     int secondmax = largestindex(a,n);

//     cout<<"Second largest element is "<<a[secondmax]<<endl;
// }

/********************************************************************************************** */

int secondlargest(int a[],int n){
    int max = a[0];
    for(int i=1;i<n;i++){
        if(max<a[i]){
            max = a[i];
        }
    }
    int secmax =-1;
    for(int i=0;i<n;i++){
        if(max != a[i] && a[i] > secmax){
            secmax = a[i];
        }
    }
    return secmax;
}

int main(){
    int n;
    cout<<"enter the size of the array\n";
    cin>>n;

    int a[n];

    cout<<"Enetr the elemts of array\n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<"Dispaly the elements\n";
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }

    cout<<endl;

    int secmax=secondlargest(a,n);
    cout<<"Second largest element is "<<secmax<<endl;
}
#include<iostream>
using namespace std;
int main()
{
    /*
    ---Top part---
    Row = 1 to n;
    * : row number;
    Space: 2*n - 2*rowNum;
    */

    int n;
    cout<<"Enter a positive integer: ";
    cin>>n;

    while(n <= 0) {  // check if n is negative or zero
        cout<<"Invalid input. Please enter a positive integer: ";
        cin>>n;
    }

    for(int i = 1; i<=n ; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        int space = 2*n - 2*i;
        for(int j =1; j<=space; j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

        for(int i = n; i>=1 ; i--){
            for(int j=1; j<=i; j++){
                cout<<"*";
            }
            int space = 2*n - 2*i;
            for(int j =1; j<=space; j++){
                cout<<" ";
            }
            for(int j=1; j<=i; j++){
                cout<<"*";
            }
            cout<<endl;
        }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    
    for(int i=1; i<=n ; i++){
        int space = n-i;
        for(int j=1; j<=space; j++){ 
            cout<<" ";
        }
        int star = 2*i-1;
        for(int j=1; j<=star; j++){
            cout<<"*";
        }
        for(int j=1; j<=space; j++){ 
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
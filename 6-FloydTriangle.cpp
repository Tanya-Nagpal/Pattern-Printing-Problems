#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a positive integer: ";
    cin>>n;

    while(n <= 0) {  // check if n is negative or zero
        cout<<"Invalid input. Please enter a positive integer: ";
        cin>>n;
    }

    int count = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    return 0;
}
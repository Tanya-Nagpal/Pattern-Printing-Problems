#include <iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter number of rows and columns: "<<endl;
    cin>>rows;
    //for rows
    for(int i = 1; i <= rows; i++){
        //for columns
        for(int j=1; j<=rows-i;j++){
            cout<<" ";
        }
        for(int j = 1; j <= rows; j++){
            if(i==1 || j==1|| i==rows || j==rows){
            cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
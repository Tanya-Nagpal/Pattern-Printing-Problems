#include <iostream>
using namespace std;

int main(){
    int rows,cols;
    cout<<"Enter number of rows and columns: "<<endl;
    cin>>rows>>cols;
    //for rows
    for(int i = 1; i <= rows; i++){
        //for columns
        for(int j =1 ; j <= cols; j++){
            if(i==1 || i==rows || j==1 || j==cols){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
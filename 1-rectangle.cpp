#include <iostream>
using namespace std;

int main(){
    int rows,cols;
    cout<<"Enter number of rows and columns: "<<endl;
    cin>>rows>>cols;
    //for rows
    for(int i = 0; i <= rows; i++){
        //for columns
        for(int j = 0; j <= cols; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
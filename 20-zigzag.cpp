#include <iostream>
using namespace std;

int main(){
    int cols;
    cout<<"Enter number of rows and columns: "<<endl;
    cin>>cols;
    //for rows
    for(int i = 1; i <= 3; i++){
        //for columns
        for(int j =1 ; j <= cols; j++){
            if(((i+j)%4 == 0) || (i==2) && (j%4==0)){
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
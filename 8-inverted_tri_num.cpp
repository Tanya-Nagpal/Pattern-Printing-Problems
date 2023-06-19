#include <iostream>
using namespace std;
int main()
{
    // int n ;
    // cout<<"Enter number of stars in first row"<<endl;
    // cin>>n;

    // for(int i = n; i>=1; i--){
    //     for(int j = 1; j <= i; j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }

    /*
    int n;
       cout << "Enter number of stars in first row" << endl;
       cin >> n;

       for (int i = n; i >= 1; i--)
       {
           for (int j = 1; j <= i; j++)
           {
               cout << n-i+1 <<" ";
           }
           cout << endl;
       }
    */

   //OR

    int n;
    cout << "Enter number of stars in first row" << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
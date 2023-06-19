#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number" << endl;
    cin >> n;

    int space = (2 * n - 1) / 2;
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        int star = 2 * i - 1;
        for (int j = 1; j <= star; j++)
        {
            cout << "*";
        }

        cout << endl;
        space--;
    }

    space = 0;
    for (int i = n; i >= 1; i--)
    {
        int star = 2 * i - 1;
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= star; j++)
        {
            cout << "*";
        }
        cout << endl;
        space++;
    }



//************or******************
/*
for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                cout<<" ";
            }
            for(int j=0;j<1*i+1;j++){
                cout<<"* ";
            }
            cout<<endl;
        }
        for(int i=0;i<n;i++){
            
            for(int j=0;j<i;j++){
                cout<<" ";
            }
            for(int j=0;j<n-i;j++){
                cout<<"* ";
            }
            cout<<endl;
        }
        */
    
    return 0;
}

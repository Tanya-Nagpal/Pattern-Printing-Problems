#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    int i;
    int j;
    for (i = 1; i <= n; i++)
    {
        
        int k =i ;
        for (j = 1; j <= (n - i); j++)
        {
            cout << "  ";
        }

        for ( ; j <= n; j++)
        {
            cout << k-- << " ";
           
        }

        k=2;
        for(; j<= n+i-1; j++){
            cout<<k++<<" ";
        }
        cout<<endl;
    }
    return 0;
}
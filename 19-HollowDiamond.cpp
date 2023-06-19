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
            if (j == 2 * i - 1 || j == 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
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
            if (j == 2 * i - 1 || j == 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
        space++;
    }

    return 0;
}
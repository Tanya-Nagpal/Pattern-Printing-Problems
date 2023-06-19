#include<iostream>
using namespace std;
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        int space=2*n-2;
        for(int i=1;i<=2*n-1;i++){
            int stars;
            if(i>n) stars=2*n-i;
            else stars=i;
            
            //for stars.
            for(int j=1;j<=stars;j++) cout<<"*";
            //for space
            
            for(int j=1;j<=space;j++)cout<<" ";
            //for stars
            for(int j=1;j<=stars;j++) cout<<"*";
            
            cout<<endl;
            if(i<n) space -= 2;
            else space += 2;
            
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends
//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;




// } Driver Code Ends
// User function template for C++

class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        // Your code goes here
        
        // -----------------basic approach----------------
        int orr_sum=n*(n+1)/2;
        int arr_sum=0;
        for(int i:array){
            arr_sum=arr_sum+i;
        }
        return orr_sum-arr_sum;
        
        // // -------------------using binary search--------------
        // int start=0;
        // int end=n-1;
        // while(start<=end){
        //     int mid=start+(end-start)/2;
        //     if()
        // }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.missingNumber(array, n) << "\n";
    }
    return 0;
}
// } Driver Code Ends
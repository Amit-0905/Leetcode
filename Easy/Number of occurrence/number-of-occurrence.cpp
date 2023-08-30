//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	    int f_occ=0;
	    int l_occ=-1;
	    
	    int start=0;
	    int end=n-1;
	    // start occurence
	    while(start<=end){
	        int mid = start + (end-start)/2;
	        if(arr[mid]==x){
	            f_occ=mid;
	            end=mid-1;
	        }
	        else if(arr[mid]<x){
	            start=mid+1;
	        }
	        else{
	            end=mid-1;
	        }
	    }
	    start=0;
	    end=n-1;
	    while(start<=end){
	        int mid = start + (end-start)/2;
	        if(arr[mid]==x){
	            l_occ=mid;
	            start=mid+1;
	        }
	        else if(arr[mid]<x){
	            start=mid+1;
	        }
	        else{
	            end=mid-1;
	        }
	    }
	    if(l_occ-f_occ<0){
	        return 0;
	    }
	    return l_occ-f_occ+1;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
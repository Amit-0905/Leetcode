//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
        vector <int> a;
        int start=0;
        for(int i=0;i<n;i++){
             if(arr[i]>0){
                swap(arr[i],arr[start]);
                start++;
            }
            else{
                a.push_back(arr[i]);
            }
        }
        int k=0;
        if(start<n){
            for(int i=start;i<n;i++){
                arr[i]=a[k];
                k++;
            }
        }
        // int start=0;
        // int end=n-1;
        // while(start<end){
        //     if(arr[start]<0){
        //         swap(arr[start],arr[end]);
        //         end--;
        //     }
        //     else{
        //         start++;
        //     }
        // }
        // int end = n-1;
        // int start = n-1;
        // while(start>0){
        //     if(arr[start]<0){
        //         swap(arr[start],arr[end]);
        //         end--;
        //     }
        //     else{
        //         start--;
        //     }
        // }
    }
};

//{ Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}

// } Driver Code Ends
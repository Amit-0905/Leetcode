//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        // code here
        int s_pos=-1,e_pos=-1;
        int start=0;
        int end=n-1;
        // for starting postion
        while(start<=end){
            int mid= start + (end-start)/2;
            if(arr[mid]==x){
                s_pos=mid;
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
        end = n-1;
        // for ending position
         while(start<=end){
            int mid= start + (end-start)/2;
            if(arr[mid]==x){
                e_pos=mid;
                start=mid+1;
            }
            else if(arr[mid]<x){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        vector<int> ans;
        ans.push_back(s_pos);
        ans.push_back(e_pos);
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends
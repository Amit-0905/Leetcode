//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int thirdLargest(vector<int> &arr) {
        // Your code here
        int largest=0;
        int second_largest = 0;
        int third_largest = 0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>=largest){
                third_largest = second_largest;
                second_largest = largest;
                largest = arr[i];
            }
            else if(arr[i]<largest && arr[i]>=second_largest){
                third_largest = second_largest;
                second_largest = arr[i];
            }
            else if(arr[i]>third_largest && arr[i]<second_largest){
                third_largest = arr[i];
            }
        }
        return third_largest;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.thirdLargest(arr) << endl;
    }

    return 0;
}

// } Driver Code Ends
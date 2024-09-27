class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int count=1;
        for(int i=0;i<arr.size();i++){
            if(i==arr.size()-1){
                arr[i]=count;
            }
            else if(arr[i]==arr[i+1]){
                count++;
                arr[i]=-1001;
            }
            else{
                arr[i]=count;
                count=1;
            }
        }
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]==-1001){
                continue;
            }
            else if(arr[i]==arr[i+1]){
                return false;
            }
    }
    return true;
    }
};
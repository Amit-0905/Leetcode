class Solution {
public:
    int singleNumber(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int i;
        for(i=0;i<arr.size()-1;i++){
            if(i==0){
                if(arr[i]==arr[i+1]){
                    continue;
                }
                else{
                    return arr[i];
                }
            }
            else if(arr[i]==arr[i+1]||arr[i]==arr[i-1]){
                continue;
            }
            else{
                return arr[i];
            }
        }
        return arr[i];
    }
};
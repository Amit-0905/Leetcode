class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size()-1;
        int ans;
        vector<int> occurence(n,0);
        for(int i=0;i<nums.size();i++){
            occurence[nums[i]-1]++;
            if(occurence[nums[i]-1]>1){
                return nums[i];
            }
        }
        return -1;

        // flag visited element
        // int ans=-1;
        // for(int i=0;i<nums.size();i++){
        //     int index=abs(nums[i]); // abs as we are marking nums as -ve
        //     // checking if visited already
        //     if(nums[index]<0){
        //         ans=index;
        //         break;
        //     }
        //     nums[index]*=-1;
        // }
        // return ans;
    }
};
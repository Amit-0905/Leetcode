class Solution {
public:
    bool isPossible(vector<int>& nums,int mid,int k){
        int sum=0;
        int count =1;
        for(int i=0;i<nums.size();i++){
            if(sum + nums[i]<=mid){
                sum += nums[i];
            }
            else{
                count++;
                if(count>k || nums[i]>mid){
                    return false;
                }
                sum=nums[i];
            }
        }
        return true;
    }
    // here start is to find tthe max in nums
    // and end is the sum of all the values
    int splitArray(vector<int>& nums, int k) {
        int start = 0;
        int end=0;
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            start = max(start,nums[i]);
            end +=nums[i];
        }
        while(start<=end){
            int mid = start + (end-start)/2;
            if(isPossible(nums,mid,k)){
                ans = mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
    }
};
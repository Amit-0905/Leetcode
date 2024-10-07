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

    int splitArray(vector<int>& nums, int k) {
        int start = 0;
        int sum=0;
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            sum +=nums[i];
        }
        int end = sum;
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
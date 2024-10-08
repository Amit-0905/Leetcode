class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int start =0 ;
        int end = nums.size()-1;
        int sum;
        while(start<end){
            sum = nums[start]+nums[end];
            if(sum == target) return {start+1,end+1};
            else if(sum>target) end--;
            else start++;
        }
        return {};
    }
};
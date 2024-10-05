class Solution {
public:
    int find_pivot(vector<int>& nums){
        int start =0;
        int end = nums.size()-1;
        while(start<end){
            int mid = start + (end-start)/2;
            if(nums[mid]>=nums[0]) start=mid+1;
            else end = mid;
        }
        return start;
    }

    int findMin(vector<int>& nums) {
        int pivot = find_pivot(nums);
        if(nums[0]>=nums[pivot]) return nums[pivot];
        else return nums[0];
    }
};
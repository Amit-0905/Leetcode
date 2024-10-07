class Solution {
public:
    int find_pivot(vector <int>& nums){
        int start = 0;
        int end = nums.size()-1;
        while(start<end){
            int mid = start + (end-start)/2;
            if(nums[mid]==nums[end]) end--;
            else if(nums[mid]>=nums[0]) start = mid+1;
            else end = mid;
        }
        return start;
    }
    bool binary_search(vector<int>& nums,int start,int end,int target){
        while(start<=end){
            int mid = start + (end-start)/2;
            if(nums[mid]==target) return true;
            else if(nums[mid]<target) start = mid+1;
            else end = mid-1;
        }
        return false;
    }
    bool search(vector<int>& nums, int target) {
        int pivot = find_pivot(nums);
        if(target >= nums[pivot] && target <=nums[nums.size()-1]) return binary_search(nums,pivot,nums.size()-1,target);
        else return binary_search(nums,0,pivot,target);
    }
};
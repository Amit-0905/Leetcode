class Solution {
public:
    int findMin(vector<int>& nums) {
        int start=0;
        int end=nums.size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(start==end){
                return nums[start];
            }
            if(mid+1<=end && nums[mid]>nums[mid+1]){
                return nums[mid+1];
            }
            else if(mid-1>=start && nums[mid]<nums[mid-1]){
                return nums[mid];
            }
            else if(nums[mid]<nums[end]){
                end=mid;
            }
            else{
                start=mid+1;
            }
        }
        return -1;
    }
};
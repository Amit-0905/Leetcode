class Solution {
public:
    void sortColors(vector<int>& nums) {
        int left=0;
        int end=nums.size()-1;
        int i=0;
        while(i<=end){
            if(nums[i]==0){
                swap(nums[i],nums[left]);
                left++;
                i++;
            }
            else if(nums[i]==2){
                swap(nums[i],nums[end]);
                end--;
            }
            else{
                i++;
            }
        }
    }
};
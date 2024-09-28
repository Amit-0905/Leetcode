class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0;
        int end=nums.size()-1;
        while(i<=end){
            if(nums[i]==val){
                swap(nums[i],nums[end]);
                // nums[end].pop_back();
                end--;
            }
            else{
                i++;
            }
        }
        return i;
    }
};
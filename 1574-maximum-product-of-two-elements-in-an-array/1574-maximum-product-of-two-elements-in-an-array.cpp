class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int largest=0,secondLargest=0;
        for(int i=0;i<nums.size();i++){
            if(largest<=nums[i]) {
                secondLargest = largest;
                largest = nums[i];
            }
            else if(nums[i]<largest && nums[i]>secondLargest){
                secondLargest=nums[i];
            }
        }
        return ((largest - 1) * (secondLargest - 1));
    }
};
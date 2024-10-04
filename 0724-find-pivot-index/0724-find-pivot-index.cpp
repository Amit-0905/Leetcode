class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        // first approach using another array as prefix sum

        // 2nd approach can be using 2 pass
        // 1st to calculate total sum
        // 2nd pass to check wheather the 
        // left sum = total sum - left sum

        int total_sum=0;
        int left_sum=0;

        for(int num : nums){
            total_sum += num;
        }
        for(int i=0;i<nums.size();i++){
            if(left_sum == total_sum - nums[i]){
                return i;
            }
            else{
                left_sum +=nums[i];
                total_sum -=nums[i];
            }
        }
        return -1;
    }
};
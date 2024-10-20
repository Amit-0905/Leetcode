class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
        while (nums[i] > 0 && nums[i] <= nums.size() && nums[nums[i] - 1] != nums[i]) {
            int temp = nums[nums[i] - 1];
            nums[nums[i] - 1] = nums[i];
            nums[i] = temp;
        }
    }
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] != i + 1) {
                return i + 1;
            }
        }
        // int i;
        // for(i=1;i<=nums.size();i++){
        //     auto ans=find(nums.begin(),nums.end(),i);
        //     if(ans == nums.end()){
        //         return i;
        //     }
        // }
        return nums.size()+1;
    }
};
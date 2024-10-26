class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       vector<int> temp(nums.size());
       for(int i=0;i<nums.size();i++){
        temp[(i+k)%nums.size()]=nums[i];
       }
       nums = temp;

        // o(n) time complexity and o(1) space complexity
        // int n = nums.size();  
        // if (n == 0) return;
        // k %= n;  
        // if (k == 0) return;  
        // reverse(nums.begin(), nums.end()); 
        // reverse(nums.begin(), nums.begin() + k); 
        // reverse(nums.begin() + k, nums.end());
    }
};
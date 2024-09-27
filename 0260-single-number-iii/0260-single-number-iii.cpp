class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int num1=0;
        int num2=0;
        long long int xor_sum=0;
        for(int i=0;i<nums.size();i++){
            xor_sum=xor_sum^nums[i];
        }
        int rightmost_bit = xor_sum^(xor_sum & (xor_sum-1));
        for(int i=0;i<nums.size();i++){
            if(nums[i]&rightmost_bit){
                num1=num1^nums[i];
            }
            else{
                num2=num2^nums[i];
            }
        }
        return {num1,num2};
    }
};
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // sorting array method
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size()-1;i++){
        //     if(nums[i]^nums[i+1]!=0){
        //         return nums[i];
        //     }
        // }
        // return -1;

        // counting occurence method:-
        // int n=nums.size()-1;
        // int ans;
        // vector<int> occurence(n,0);
        // for(int i=0;i<nums.size();i++){
        //     occurence[nums[i]-1]++;
        //     if(occurence[nums[i]-1]>1){
        //         return nums[i];
        //     }
        // }
        // return -1;

        // positioning method
        while(nums[0]!=nums[nums[0]]){
            swap(nums[0],nums[nums[0]]);
        }
        return nums[0];
    }
};
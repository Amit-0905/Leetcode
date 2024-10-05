class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k %= n;
        if(nums.size()<=k || k==0){
            return;
        }
        vector <int>move;
        for(int i=n-k;i<n;i++){
            move.push_back(nums[i]);
        }
        for(int i=n-1;i>=k;i--){
            swap(nums[i],nums[i-k]);
        }
        for(int i=0;i<k;i++){
            nums[i]=move[i];
        }
    }
};
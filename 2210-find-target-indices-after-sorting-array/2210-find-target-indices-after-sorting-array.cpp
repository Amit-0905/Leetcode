class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> v;
        sort(nums.begin(),nums.end());
        auto f_occ =lower_bound(nums.begin(),nums.end(),target);
        int a=f_occ-nums.begin();
        auto l_occ = upper_bound(nums.begin(),nums.end(),target);
        int b=l_occ-nums.begin();
        for(int i=a;i<b;i++){
            v.push_back(i);
        }
        return v;
    }
};
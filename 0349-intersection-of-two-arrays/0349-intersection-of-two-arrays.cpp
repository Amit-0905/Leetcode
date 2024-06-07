class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0;
        set <int> ans;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]==nums2[j]){
                ans.insert(nums1[i]);
                nums2[j]=INT_MIN;
                i++;
                j=0;
            }
            else if(j==nums2.size()-1){
                i++;
                j=0;
            }
            else{
                j++;
            }
        }
        vector<int> sol(ans.begin(),ans.end());
        return sol;
    }
};
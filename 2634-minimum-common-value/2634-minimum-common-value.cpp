class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int starta=0;
        int startb=0;
        while(starta<nums1.size()&& startb<nums2.size()){
            if(nums1[starta]==nums2[startb]){
                return nums1[starta];
            }
            else if(nums1[starta]<nums2[startb]){
                starta++;
            }
            else{
                startb++;
            }
        }
        return -1;
    }
};
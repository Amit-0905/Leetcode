class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int p1 = nums1.size() -1;
        int p2 = nums2.size() -1;
        vector<int> v;
        while(p1>=0 && p2>=0){
            if(nums1[p1]>nums2[p2]){
                v.insert(v.begin(),nums1[p1]);
                p1--;
            }
            else{
                v.insert(v.begin(),nums2[p2]);
                p2--;
            }
        }
        while(p2>=0){
            v.insert(v.begin(),nums2[p2]);
            p2--;
        }
        while(p1>=0){
            v.insert(v.begin(),nums1[p1]);
            p1--;
        }
        int n = v.size();
        if(n%2!=0){
            return v[n/2];
        }
        else{
            float ans = v[n/2]+v[(n/2) - 1];
            float ans1 = ans/2.0;
            return ans1;
        }
    }
};
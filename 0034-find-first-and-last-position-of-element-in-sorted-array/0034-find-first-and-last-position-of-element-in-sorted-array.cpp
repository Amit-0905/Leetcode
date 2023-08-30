class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        // -----------------Basic approach O(n)------------
        // int startingPosition = -1, endingPosition = -1;
        // int n = nums.size();
        // for(int i=0; i<n; i++){
        //     if(nums[i] == target){
        //         startingPosition = i;
        //         break;
        //     }
        // }
        // for(int i=n-1; i>=0; i--){
        //     if(nums[i] == target){
        //         endingPosition = i;
        //         break;
        //     }
        // }
        // return {startingPosition, endingPosition};

        int s_pos=-1,e_pos=-1;
        int start=0;
        int end=nums.size()-1;
        // for starting postion
        while(start<=end){
            int mid= start + (end-start)/2;
            if(nums[mid]==target){
                s_pos=mid;
                end=mid-1;
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        start=0;
        end = nums.size()-1;
        // for ending position
         while(start<=end){
            int mid= start + (end-start)/2;
            if(nums[mid]==target){
                e_pos=mid;
                start=mid+1;
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        vector<int> ans;
        ans.push_back(s_pos);
        ans.push_back(e_pos);
        return ans;
    }
};
class Solution {
public:
    int first_occ(vector<int>& nums, int target){
        int start=0;
        int end =nums.size()-1;
        int ans=-1;
        while(start<=end){
            int mid = start+(end-start)/2;
            if(nums[mid]==target){
                ans = mid;
                end=mid-1;
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else end=mid-1;
        }
        return ans;
    }

    int last_occ(vector<int>& nums, int target){
        int start=0;
        int end =nums.size()-1;
        int ans=-1;
        while(start<=end){
            int mid = start+(end-start)/2;
            if(nums[mid]==target){
                ans = mid;
                start=mid+1;
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else end=mid-1;
        }
        return ans;
    }

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

        int first_pos = first_occ(nums,target);
        int last_pos = last_occ(nums,target);
        
        return {first_pos,last_pos};
    }
};
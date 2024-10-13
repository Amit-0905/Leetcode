class Solution {
public:
    bool isPossible(vector<int>& bloomDay, int m, int k,int mid){
        int flower =0;
        int bouquet =0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=mid){
                flower++;
                if(flower == k){
                    bouquet++;
                    flower=0;
                    if(bouquet>=m){
                        return true;
                    }
                }
            }
            else{
                flower=0;
            }
        }
        return false;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        long long totalNeeded = (long long)m * k;
        if (totalNeeded > bloomDay.size()) {
            return -1; // Not enough flowers
        }
        int start=0;
        int end = -1;
        for(int i=0;i<bloomDay.size();i++){
            start = min(start,bloomDay[i]);
            end = max(end,bloomDay[i]);
        }
        int ans=-1;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(isPossible(bloomDay,m,k,mid)){
                ans = mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
    }
};
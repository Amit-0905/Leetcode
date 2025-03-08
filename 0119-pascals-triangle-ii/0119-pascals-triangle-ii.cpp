class Solution {
public:
    vector<int> getRow(int rowIndex) {
        rowIndex = rowIndex+1;
        vector<int> ansrow;
        long long int ans=1;
        ansrow.push_back(1);
        for(int i =1;i<rowIndex;i++){
            ans = ans*(rowIndex-i);
            ans = ans/i;
            ansrow.push_back(ans);
        }
        return ansrow;
    }
};
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        int cols=matrix[0].size();
        int start=0;
        int end=rows*cols - 1;
        while(start<=end){
            int mid=start+(end-start)/2;
            int a=mid/cols;
            int b=mid%cols;
            if(matrix[a][b]==target){
                return true;
            }
            else if(matrix[a][b]>target){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return false;
    }
};
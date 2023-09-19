class Solution {
public:
    int maxArea(vector<int>& height) {
        int start=0;
        int end =height.size()-1;
        int area=0;
        while(start<end){
            int minimum=min(height[start],height[end]);
            int currArea=minimum*abs(end-start);
            if(currArea>area){
                area=currArea;
            }
            if(minimum==height[end]){
                end--;
            }
            else{
                start++;
            }
        }
        return area;
    }
};
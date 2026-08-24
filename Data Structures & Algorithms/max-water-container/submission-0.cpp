class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;
        int r = height.size()-1;
        int maxArea = 0;
        for(int i=0; i<height.size(); i++){
            int area = 0;
            if(height[l] < height[r]){
                area = (r-l)*height[l];
                l++;
            }
            else if(height[l] > height[r]){
                area = (r-l)*height[r];
                r--;
            }
            else{
                area = (r-l)*height[l];
                l++;
                r--;
            }
            maxArea = area > maxArea ? area : maxArea;
        }
        return maxArea;
    }
};
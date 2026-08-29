class Solution {
public:
    int maxArea(vector<int>& height) {
        int i =0,j=height.size()-1,maxarea=INT_MIN;
        while(i<=j){
          int area = (j-i)*min(height[i],height[j]);
          maxarea=max(maxarea,area);
          if(height[i]>height[j]) j--;
          else i++;
        }
        return maxarea;
    }
};
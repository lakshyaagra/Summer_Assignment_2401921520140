class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int maxAreaa=INT_MIN;
        while(left<right){
            int h=min(height[left],height[right]);
            maxAreaa=max(maxAreaa,(right-left)*h);
            if(height[left]<height[right]) left++;
            else right--;
        }
        return maxAreaa;
    }
};

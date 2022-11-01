class Solution {
public:
    int maxArea(vector<int>& height) {
        int maximumArea = INT_MIN;
        
        int left = 0;
        int right = height.size()-1;
        int tempArea;
        while(left <= right){
            tempArea = abs(right-left) * min(height[left], height[right]);
            maximumArea = max(tempArea, maximumArea);
            if(height[left] < height[right])
                left++;
            else
                right--;
        }
        return maximumArea;
    }
};
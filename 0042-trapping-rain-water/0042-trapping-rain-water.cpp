class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int max_left[n];
        int max_right[n];
        int minimum[n];
        
        int prev_max_left = height[0];
        int prev_max_right = height[n-1];
        
        for(int i=0;i<n;i++){
            max_left[i] = prev_max_left;
            if(prev_max_left < height[i])
                prev_max_left = height[i];
        }
        
        for(int i=n-1;i>=0;i--){
            max_right[i] = prev_max_right;
            if(prev_max_right < height[i])
                prev_max_right = height[i];
        }
        
        int area = 0;
        
        for(int i=0;i<n;i++){
            if(min(max_left[i], max_right[i]) - height[i] >= 0)
                area += min(max_left[i], max_right[i]) - height[i];
        }
        return area;
    }
};
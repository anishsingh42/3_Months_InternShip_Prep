class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int l = 0;
        int r = n-1;
        int lmax = height[l];
        int rmax = height[r];
        int res = 0;
        while(l<r){
            if(lmax < rmax){
                l++;
                if(lmax - height[l] > 0)
                    res += lmax - height[l];
                lmax = max(lmax, height[l]);
            }
            else{
                r--;
                if(rmax - height[r] > 0)
                    res += rmax - height[r];
                rmax = max(rmax, height[r]);
            }
        }
        return res;
    }
};
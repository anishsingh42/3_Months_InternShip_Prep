class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int h = nums.size()-1;
        int l = 0;
        int m;
        int ind = -1;
        while(l <= h){
            m = l + (h-l)/2;
            if(nums[m] == target)
                return m;
            else if(nums[m] < target){
                ind = m;
                l = m+1;
            }
            else{
                h = m-1;
            }
        }
        return l;
    
    }
};
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l = 0;
        int h = nums.size()-1;
        int m;
        while(l<h){
            m = l + (h-l)/2;
            
            if(m > 0 && m < nums.size()-1){
                if(nums[m] > nums[m-1] && nums[m] > nums[m+1])
                    return m;
                else if (nums[m] < nums[m+1]){
                    l = m+1;
                }
                else{
                    h = m-1;
                }
            }
            else if(m==0){
                if(nums[m] > nums[m+1]){
                    return m;
                }
                else{
                    return m+1;
                }
            }
            else if(m==nums.size()-1){
                if(nums[m] > nums[m-1]){
                    return m;
                }
                else{
                    return m-1;
                }
            }
        }
        
        return l;
    }
};
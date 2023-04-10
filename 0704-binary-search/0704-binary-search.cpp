class Solution {
public:
    int solve(vector<int> &nums, int target, int low, int high){
        int mid = low + (high-low)/2;  
        if(low <= high){
           if(nums[mid] == target) 
               return mid;
            else if(nums[mid] < target)
                return solve(nums, target, mid+1,high);
            else
                return solve(nums, target, low, mid-1); 
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        //recursive
        
        int high = nums.size()-1;
        int low = 0;
        return solve(nums, target, low, high);
    }
};
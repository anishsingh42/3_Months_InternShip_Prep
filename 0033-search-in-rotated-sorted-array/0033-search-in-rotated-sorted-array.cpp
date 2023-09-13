class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        int mid;
        while(left <= right){
            mid = left + (right - left)/2;
            //mid == target
            if(nums[mid] == target) return mid;
            
            //search the left sorted array
            if(nums[left] <= nums[mid]){
                if(nums[left] <= target and nums[mid] >= target) right = mid-1;
                else left = mid + 1;
            }
            //search the right sorted array
            else{
                if(nums[right] >= target and nums[mid] <= target) left = mid+1;
                else right = mid-1;
            }
        }
        
        return -1;
    }
};
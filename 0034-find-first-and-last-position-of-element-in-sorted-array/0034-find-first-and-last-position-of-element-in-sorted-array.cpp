class Solution {
public:
    int first_occ(vector<int> &nums, int target){
        int l = 0;
        int h = nums.size()-1;
        int m;
        int fo = -1;
        while(l <= h){
            m = l + (h-l)/2;
            if(nums[m] == target){
                fo = m;
                h = m-1;
            }
            else if(nums[m] > target) h = m-1;
            else l = m+1;
        }
            return fo;
    }
    int last_occ(vector<int> &nums, int target){
        int l = 0;
        int h = nums.size()-1;
        int m;
        int lo = -1;
        while(l <= h){
            m = l + (h-l)/2;
            if(nums[m] == target){
                lo = m;
                l = m+1;
            }
            else if(nums[m] > target) h = m-1;
            else l = m+1;
        }
            return lo;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        //use binary search to find first occ and the last occ seperately of the target variable 
        vector<int> ans;
        int first_occurence = first_occ(nums,target);
        int last_occurence = last_occ(nums,target);
        ans.push_back(first_occurence);
        ans.push_back(last_occurence);
        return ans;
    }
};
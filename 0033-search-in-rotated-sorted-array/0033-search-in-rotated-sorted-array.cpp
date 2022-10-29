class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0;
        int h=nums.size()-1;
        int m;
        while(l<=h){
            m = l+(h-l)/2;
            if(nums[m] == target){
                return m;
            }
            //rotation exists ; and mid in left monotonous part
            else if(nums[m] > nums[h]){
                if(nums[l] <= target && target <= nums[m])
                    h=m-1;
                else
                    l=m+1;
            }
            //rotation exists ; and mid in the right monotonous part
            else if(nums[m] < nums[l]){
                if(nums[m] <= target && target <= nums[h])
                    l=m+1;
                else
                    h=m-1;
            }
            //rotation does not exists 
            else{
                if(nums[m] < target)
                    l = m+1;
                else
                    h=m-1;
            }
        }
        return -1;
    }
};
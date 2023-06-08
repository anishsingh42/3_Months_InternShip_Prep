class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        //brute
        if(nums.size()==1) return nums[0];
        int i=0;
        for(i=0;i<nums.size();i+=2){
            if(nums[i] != nums[i+1])
                break;
        }
        return nums[i];
    }
};
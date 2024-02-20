class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xorint = 0;
        int i=0;
        for(i=0;i<nums.size();i++){
            xorint = xorint ^ i ^ nums[i];
        }

        return xorint ^ i;
    }
};
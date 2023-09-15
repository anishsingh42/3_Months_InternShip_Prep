class Solution {
public:
    bool canJump(vector<int>& nums) {
        //greedy 
        int fartest = 0;
        for(int i = 0; i < nums.size(); i++){
            if(i > fartest) return false;
            fartest = max(fartest, i + nums[i]);
        }
        return true;
    }
};
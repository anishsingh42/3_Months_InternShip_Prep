class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // moore vooting algorithm
        int cnt_sum = 0;
        int max_sum = INT_MIN;
        for(int i = 0; i < nums.size(); i++){
            cnt_sum = max(nums[i], cnt_sum+nums[i]);
            max_sum = max(cnt_sum, max_sum);
        }
        
        return max_sum;
    }
};
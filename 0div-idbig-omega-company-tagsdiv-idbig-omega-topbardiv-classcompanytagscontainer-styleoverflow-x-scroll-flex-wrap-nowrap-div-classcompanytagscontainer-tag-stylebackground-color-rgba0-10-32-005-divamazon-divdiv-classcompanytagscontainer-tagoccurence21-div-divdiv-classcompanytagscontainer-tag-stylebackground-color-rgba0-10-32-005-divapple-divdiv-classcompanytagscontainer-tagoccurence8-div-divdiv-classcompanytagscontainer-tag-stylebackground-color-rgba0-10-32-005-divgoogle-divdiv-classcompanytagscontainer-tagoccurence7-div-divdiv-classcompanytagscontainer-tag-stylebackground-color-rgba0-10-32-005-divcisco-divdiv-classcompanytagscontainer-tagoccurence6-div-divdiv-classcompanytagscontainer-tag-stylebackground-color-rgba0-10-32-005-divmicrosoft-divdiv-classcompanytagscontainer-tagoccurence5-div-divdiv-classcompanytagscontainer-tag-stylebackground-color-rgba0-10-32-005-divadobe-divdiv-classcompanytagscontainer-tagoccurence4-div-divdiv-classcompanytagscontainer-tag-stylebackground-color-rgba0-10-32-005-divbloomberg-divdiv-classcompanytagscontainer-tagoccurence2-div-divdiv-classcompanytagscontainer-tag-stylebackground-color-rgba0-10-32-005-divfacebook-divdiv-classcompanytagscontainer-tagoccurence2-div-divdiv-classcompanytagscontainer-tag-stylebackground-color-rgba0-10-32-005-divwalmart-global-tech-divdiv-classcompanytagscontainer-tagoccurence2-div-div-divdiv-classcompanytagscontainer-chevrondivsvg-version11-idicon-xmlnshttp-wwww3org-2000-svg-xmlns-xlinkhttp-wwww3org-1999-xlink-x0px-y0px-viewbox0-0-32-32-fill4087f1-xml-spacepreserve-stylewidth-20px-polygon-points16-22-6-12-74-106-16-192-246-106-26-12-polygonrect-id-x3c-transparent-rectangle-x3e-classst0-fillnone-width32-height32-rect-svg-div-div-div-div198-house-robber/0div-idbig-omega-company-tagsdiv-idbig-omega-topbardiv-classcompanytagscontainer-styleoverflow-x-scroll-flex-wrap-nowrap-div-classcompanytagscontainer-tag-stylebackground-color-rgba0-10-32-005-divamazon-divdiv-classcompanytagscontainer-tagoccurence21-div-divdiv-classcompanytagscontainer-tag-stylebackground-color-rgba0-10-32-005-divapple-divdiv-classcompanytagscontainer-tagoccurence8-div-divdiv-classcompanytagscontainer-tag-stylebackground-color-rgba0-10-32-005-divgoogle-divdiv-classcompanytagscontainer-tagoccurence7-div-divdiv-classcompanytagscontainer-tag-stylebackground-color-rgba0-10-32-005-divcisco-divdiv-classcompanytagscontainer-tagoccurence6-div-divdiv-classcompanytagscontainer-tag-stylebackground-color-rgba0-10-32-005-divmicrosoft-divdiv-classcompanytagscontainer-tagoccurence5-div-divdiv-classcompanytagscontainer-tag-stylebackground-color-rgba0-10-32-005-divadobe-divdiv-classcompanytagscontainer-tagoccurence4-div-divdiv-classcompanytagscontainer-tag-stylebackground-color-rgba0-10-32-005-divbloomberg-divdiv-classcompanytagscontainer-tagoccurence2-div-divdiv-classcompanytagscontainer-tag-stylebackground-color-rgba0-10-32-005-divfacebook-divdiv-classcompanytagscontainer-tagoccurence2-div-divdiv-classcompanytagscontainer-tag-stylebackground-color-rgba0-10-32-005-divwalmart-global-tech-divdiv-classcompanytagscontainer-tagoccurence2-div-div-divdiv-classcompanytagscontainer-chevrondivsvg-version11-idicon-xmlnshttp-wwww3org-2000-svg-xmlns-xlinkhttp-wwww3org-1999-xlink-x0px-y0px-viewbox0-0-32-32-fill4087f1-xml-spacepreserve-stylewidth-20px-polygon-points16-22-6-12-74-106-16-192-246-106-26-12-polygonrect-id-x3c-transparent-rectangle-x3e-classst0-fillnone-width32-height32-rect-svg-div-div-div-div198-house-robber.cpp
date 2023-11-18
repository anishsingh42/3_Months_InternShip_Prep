class Solution {
public:
    int dp[101];
    int solve(vector<int> &arr, int idx){
        if(idx >= arr.size()) return 0;
        if(dp[idx] != -1) return dp[idx];
        return dp[idx] = max(arr[idx]+solve(arr, idx+2), solve(arr, idx+1));
    }
    int rob(vector<int>& nums) {
        memset(dp, -1, sizeof(dp));
        return solve(nums, 0);
    }
};
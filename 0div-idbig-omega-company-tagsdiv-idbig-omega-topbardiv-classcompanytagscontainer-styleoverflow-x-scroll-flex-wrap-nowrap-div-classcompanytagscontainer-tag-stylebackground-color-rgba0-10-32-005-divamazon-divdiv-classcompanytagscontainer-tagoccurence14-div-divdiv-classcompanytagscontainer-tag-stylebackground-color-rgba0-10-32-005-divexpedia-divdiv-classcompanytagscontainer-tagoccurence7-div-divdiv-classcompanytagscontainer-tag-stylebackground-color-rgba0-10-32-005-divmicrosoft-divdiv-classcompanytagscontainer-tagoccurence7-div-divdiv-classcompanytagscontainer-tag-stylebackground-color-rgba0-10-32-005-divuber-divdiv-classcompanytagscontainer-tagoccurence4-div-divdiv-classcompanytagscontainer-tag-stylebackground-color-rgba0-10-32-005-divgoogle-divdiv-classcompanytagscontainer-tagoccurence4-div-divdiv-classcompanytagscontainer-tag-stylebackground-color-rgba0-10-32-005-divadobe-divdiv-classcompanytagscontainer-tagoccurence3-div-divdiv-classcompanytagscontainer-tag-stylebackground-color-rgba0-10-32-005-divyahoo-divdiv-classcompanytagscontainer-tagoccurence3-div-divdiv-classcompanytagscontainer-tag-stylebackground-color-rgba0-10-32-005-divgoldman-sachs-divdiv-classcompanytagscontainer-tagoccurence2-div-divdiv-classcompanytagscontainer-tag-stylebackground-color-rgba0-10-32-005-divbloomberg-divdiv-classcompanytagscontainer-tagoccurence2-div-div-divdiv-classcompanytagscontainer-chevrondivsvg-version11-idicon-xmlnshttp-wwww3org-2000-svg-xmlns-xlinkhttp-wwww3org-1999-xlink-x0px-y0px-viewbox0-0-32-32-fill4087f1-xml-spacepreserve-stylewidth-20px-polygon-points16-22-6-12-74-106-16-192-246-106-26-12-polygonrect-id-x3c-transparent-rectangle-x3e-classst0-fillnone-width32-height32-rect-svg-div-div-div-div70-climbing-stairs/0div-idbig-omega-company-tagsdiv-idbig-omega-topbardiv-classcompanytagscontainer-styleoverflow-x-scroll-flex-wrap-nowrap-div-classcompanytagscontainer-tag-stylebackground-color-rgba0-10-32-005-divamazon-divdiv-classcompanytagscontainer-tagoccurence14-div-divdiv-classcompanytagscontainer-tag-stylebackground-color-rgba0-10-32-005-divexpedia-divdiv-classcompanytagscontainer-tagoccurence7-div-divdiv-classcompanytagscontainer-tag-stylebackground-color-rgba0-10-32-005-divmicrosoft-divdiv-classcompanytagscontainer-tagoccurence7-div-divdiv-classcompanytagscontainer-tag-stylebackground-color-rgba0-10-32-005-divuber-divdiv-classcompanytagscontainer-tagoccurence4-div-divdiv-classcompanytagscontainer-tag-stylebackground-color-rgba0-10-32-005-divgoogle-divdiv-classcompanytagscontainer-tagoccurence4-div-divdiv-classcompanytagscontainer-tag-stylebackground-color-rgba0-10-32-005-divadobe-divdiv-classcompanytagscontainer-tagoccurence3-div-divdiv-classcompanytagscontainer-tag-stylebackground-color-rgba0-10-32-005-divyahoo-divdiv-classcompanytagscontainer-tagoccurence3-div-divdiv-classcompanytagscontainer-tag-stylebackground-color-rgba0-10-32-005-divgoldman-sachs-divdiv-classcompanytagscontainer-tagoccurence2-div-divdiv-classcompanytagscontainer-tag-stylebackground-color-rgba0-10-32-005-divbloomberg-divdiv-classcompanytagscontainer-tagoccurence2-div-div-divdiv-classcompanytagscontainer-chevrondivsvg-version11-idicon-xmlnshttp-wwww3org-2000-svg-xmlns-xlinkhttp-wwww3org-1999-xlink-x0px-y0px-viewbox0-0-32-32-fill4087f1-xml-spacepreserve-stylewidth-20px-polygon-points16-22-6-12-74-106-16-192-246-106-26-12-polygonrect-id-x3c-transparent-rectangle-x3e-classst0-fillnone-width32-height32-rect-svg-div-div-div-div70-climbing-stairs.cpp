class Solution {
public:
    int dp[101] = {0};
    int climbStairs(int n) {
        if(n <= 1) return 1;
        if(dp[n]) return dp[n];
        return dp[n] = climbStairs(n-1) + climbStairs(n-2);
    }
};
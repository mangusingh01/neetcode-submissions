class Solution {
public:
    int solve(int n, vector<int>& dp) {
        if(n == 1 || n == 2) return n;
        if(dp[n] != -1) return dp[n];
        dp[n] = climbStairs(n-1) + climbStairs(n-2);
        return dp[n];
    }
    int climbStairs(int n) {
        vector<int> dp(n+1, -1);
        if(n == 1 || n == 2) return n;
        return solve(n, dp);
    }
};

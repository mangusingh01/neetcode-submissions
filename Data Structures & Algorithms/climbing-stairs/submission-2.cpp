class Solution {
public:
    int solve(int n, vector<int>& dp) {
        if(dp[n] != -1) return dp[n];
        if(n == 1 || n == 2) return n;
        dp[n] = solve(n-1, dp) + solve(n-2, dp);
        return dp[n];
    }
    int climbStairs(int n) {
        vector<int> dp(n+1, -1);
        if(n == 1 || n == 2) dp[n] = n;
        return solve(n, dp);
    }
};

class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> part;
        vector<vector<int>> dp(s.size(), vector<int>(s.size(), -1));
        dfs(0, s, part, res, dp);
        return res;
    }

private:
    void dfs(int i, const string& s, vector<string>& part, 
        vector<vector<string>>& res, vector<vector<int>> &dp) {
        if (i >= s.length()) {
            res.push_back(part);
            return;
        }
        for (int j = i; j < s.length(); j++) {
            if (isPali(s, i, j, dp)) {
                part.push_back(s.substr(i, j - i + 1));
                dfs(j + 1, s, part, res, dp);
                part.pop_back();
            }
        }
    }

    bool isPali(const string& s, int l, int r, vector<vector<int>> &dp) {
        if(dp[l][r] != -1) return dp[l][r];
        while (l < r) {
            if (s[l] != s[r]) {
                dp[l][r] = 0;
                return false;
            }
            l++;
            r--;
        }
        dp[l][r] = 1;
        return true;
    }
};
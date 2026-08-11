class Solution {
public:
    void solve(vector<int>& nums, int i, int target, int &ans) {
        if(i == nums.size()) {
            if(target == 0)ans++; 
            return;  
        }

        solve(nums, i+1, target-nums[i], ans);
        solve(nums, i+1, target+nums[i], ans);
        return; 
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        int ans = 0; 
        solve(nums, 0, target, ans); 
        return ans;
    }
};

class Solution {
public:
    vector<vector<int>> ans; 
    void solve(vector<int>& nums, int i, vector<int> &temp, int target) {
        if(target == 0 and temp.size() != 0) {
            ans.push_back(temp); 
            return; 
        }
        if(i == nums.size()) return;

        solve(nums, i+1, temp, target); 
        if(nums[i] <= target) {
            temp.push_back(nums[i]);
            solve(nums, i, temp, target-nums[i]);
            temp.pop_back();
        }
        return;
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> temp; 
        solve(nums, 0, temp, target); 
        return ans;
    }
};

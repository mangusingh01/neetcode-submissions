class Solution {
public:
    int solve(vector<int>& nums, int start, int end, int target) {
        if(start > end) return -1; 

        int mid = (start+end)/2; 

        while(start <= end) {
            mid = (start+end)/2;
            if(nums[mid] < target) {
                start = mid+1; 
            } else if(nums[mid] > target) {
                end = mid-1; 
            } else {
                return mid; 
            }
        }
        return -1;
    }
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size(); 

        for(int i=0; i<=n/2; i++) {
            int j = solve(nums, i+1, n-1, target-nums[i]);
            if(j != -1) {
                return {i, j};
            }
        }

        return {};
    }
};

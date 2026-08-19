class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        int ans = 0;
        int tempSum = 0;

        for(int i=0; i<nums.size(); i++) {
            tempSum = nums[i];
            if(tempSum == k) ans++;
            for(int j=i+1; j<nums.size(); j++) {
                tempSum += nums[j];
                if(tempSum == k) ans++;
            }
        }

        return ans;
        
    }
};
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector<int> preProduct(nums.size());
        vector<int> postProduct(nums.size());

        preProduct[0] = 1;
        postProduct[nums.size()-1] = 1;

        for(int i=1; i<nums.size(); i++) {
            preProduct[i] = preProduct[i-1]*nums[i-1];
        }

        for(int i=nums.size()-2; i>=0; i--) {
            postProduct[i] = postProduct[i+1]*nums[i+1];
        }

        vector<int> ans;
        for(int i=0; i<nums.size(); i++) {
            ans.push_back(postProduct[i]*preProduct[i]);
        }

        return ans;

    }
};

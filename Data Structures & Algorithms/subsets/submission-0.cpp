class Solution {
public:

    vector<vector<int>> ans;

    void getSubs(vector<int>& nums, vector<int> temp, int index) {
        if(index >= nums.size()) {
            ans.push_back(temp); 
            return; 
        } 

        // when not including the current index
        getSubs(nums, temp, index+1); 

        // include the current index
        temp.push_back(nums[index]); 
        getSubs(nums, temp, index+1);


    }


    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp; 

        getSubs(nums, temp, 0);

        return ans;
    }
};

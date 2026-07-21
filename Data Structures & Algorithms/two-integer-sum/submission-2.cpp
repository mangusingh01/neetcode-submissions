class Solution {
public:

    vector<int> twoSum(vector<int>& nums, int target) {
        // Key: the number, Value: its index in the array
        std::unordered_map<int, int> seen_numbers; 
        int n = nums.size(); 

        for (int i = 0; i < n; i++) {
            int complement = target - nums[i];

            // Check if the complement already exists in our map
            if (seen_numbers.find(complement) != seen_numbers.end()) {
                return {seen_numbers[complement], i};
            }

            // Store the current number and its index
            seen_numbers[nums[i]] = i;
        }

            // Return empty if no solution is found
        return {}; 
    }
};

class Solution {
public:

    int trap(vector<int>& height) {
        vector<int> prefixMax(height.size(), height[0]); 
        vector<int> suffixMax(height.size(), height[height.size()-1]);

        for(int i=1; i<height.size(); i++) {
            prefixMax[i] = max(height[i], prefixMax[i-1]); 

            suffixMax[height.size()-i-1] = max(suffixMax[height.size()-i], height[height.size()-i]);
        }

        int ans = 0; 

        for(int i=0; i<height.size(); i++) {
            int temp = min(prefixMax[i], suffixMax[i]) - height[i];

            ans += temp>0? temp: 0;
        }

        return ans;
    }
};

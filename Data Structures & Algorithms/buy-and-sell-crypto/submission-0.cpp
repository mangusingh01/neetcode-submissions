class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans =0; 
        int intMin = prices[0];

        for(int i=0; i<prices.size(); i++) {
            intMin = min(prices[i], intMin); 

            ans = max(ans, prices[i]-intMin);
        }

        return ans;
    }
};

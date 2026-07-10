class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> umap; 

        for(auto a: nums) {
            umap[a]++;
        }

        vector<int> freq;
        unordered_map<int, vector<int>> freqMap;

        for(auto a: umap) {
            freq.push_back(a.second); 
        }

        sort(freq.begin(), freq.end(), greater<int>());
        vector<int> ans; 

        int minFreq = freq[k-1];

        for(auto a: umap) {
            if(a.second >= minFreq) {
                ans.push_back(a.first);
            }
        }

        return ans;

    }
};

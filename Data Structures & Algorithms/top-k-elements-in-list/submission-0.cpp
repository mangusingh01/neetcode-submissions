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
            freqMap[a.second].push_back(a.first);
        }

        sort(freq.begin(), freq.end(), greater<int>());
        vector<int> ans; 

        for(int a: freq) {
            vector<int> temp;
            temp = freqMap[a]; 

            for(int a: temp){
                ans.push_back(a);
            }
        }

        while(ans.size() > k) {
            ans.pop_back(); 
        }

        return ans;

    }
};

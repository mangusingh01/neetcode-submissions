class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> umap; 

        for(auto a: nums) {
            umap[a]++;
        }

        priority_queue<int, vector<int>, greater<int>> minHeap;
        unordered_map<int, vector<int>> freqMap;

        for(auto a: umap) {
            minHeap.push(a.second); 
            if(minHeap.size() > k) minHeap.pop(); 
        }

        vector<int> ans; 

        int minFreq = minHeap.top();

        for(auto a: umap) {
            if(a.second >= minFreq) {
                ans.push_back(a.first);
            }
        }

        return ans;

    }
};

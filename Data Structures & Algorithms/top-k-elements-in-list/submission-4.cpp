class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int> mp;
        priority_queue<int, vector<int>, greater<int>> pq;
        set<int> freqMap;
        vector<int> ans;

        for(auto a: nums) {
            mp[a]++;
        }

        for(auto t: mp) {
            if(pq.size() < k) pq.push(t.second);
            else {
                int temp = pq.top();
                if(temp < t.second) {
                    pq.pop();
                    pq.push(t.second);
                }
            }
        }

        while(pq.size() != 0) {
            freqMap.insert(pq.top());
            pq.pop();
        }

        for(auto a: mp) {
            if(freqMap.contains(a.second))
                ans.push_back(a.first);
        }

        return ans;

    }
};

class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int ans = INT_MIN;
        int start = 0;
        unordered_map<char,int> mp;

        for(int i=0; i<s.size(); i++) {
            if(mp.find(s[i]) != mp.end() and mp[s[i]]>= start) {
                start = i;
            } 
            ans = max(ans, i-start+1);
            mp[s[i]] = i;
        }
        return ans;  
    }
};

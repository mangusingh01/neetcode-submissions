class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size() != t.size()) return false;

        vector<int> sa(26, 0);
        vector<int> st(26, 0);

        for(int i=0; i<s.size(); i++) {
            sa[s[i]-'a']++;
        }

        for(int i=0; i<t.size(); i++) {
            st[t[i]-'a']++;
        }
        
        for(int i=0; i<26; i++) {
            if(sa[i] != st[i]) return false;
        }

        return true;
    }
};

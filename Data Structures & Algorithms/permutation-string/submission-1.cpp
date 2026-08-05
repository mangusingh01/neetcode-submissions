class Solution {
public:

    bool isEqual(vector<int> &arr1, vector<int> &arr2) {
        for(int i=0; i<26; i++) {
            if(arr1[i] != arr2[i]) return false;
        }

        return true;
    }
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;
        vector<int> s1Count(26,0);
        vector<int> s2Count(26,0);

        for(char c: s1){
            s1Count[c-'a']++;
        }

        for(int i=0; i<s1.size(); i++){
            s2Count[s2[i]-'a']++;
        }

        int low = 0; int high = s1.size()-1; 

        while(high < s2.size()) {
            if(isEqual(s1Count, s2Count)) return true; 
            s2Count[s2[low]-'a'] --; 
            if(high < s2.size()-1)s2Count[s2[high+1]-'a'] ++;
            low ++; high++;
        }
        
        return false;
        
    }
};

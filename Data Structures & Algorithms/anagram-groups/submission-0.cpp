class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> umap; 

        for(string str: strs) {
            vector<int> freq(26, 0);

            for(char c: str){
                freq[c-'a']++; 
            } 

            string key = ""; 
            for(int i=0; i<26; i++) {
                key = key + to_string('a'+i) + to_string(freq[i]);
            }
            umap[key].push_back(str);
        }

        vector<vector<string>> ans;

        for(auto a: umap){
            ans.push_back(a.second);
        }

        return ans;
    
    }
};

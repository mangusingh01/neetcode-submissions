class Solution {
public:
    int toNum(string x) {
        int n = x.size(); 
        int ans=0;
        for(int i=0; i<n; i++) {
            ans = ans + (x[n-i-1]-'0')*pow(10, i); 
        }

        return ans;
    }
    int calc(vector<string> &tokens, int i) {
        if(i == 0) return toNum(tokens[i]); 
        if(tokens[i] == "+") return calc(tokens, i-2) + toNum(tokens[i-1]); 
        if(tokens[i] == "-") return calc(tokens, i-2) - toNum(tokens[i-1]); 
        if(tokens[i] == "*") return calc(tokens, i-2) * toNum(tokens[i-1]); 
        return calc(tokens, i-2) / toNum(tokens[i-1]); 
    }

    int evalRPN(vector<string>& tokens) {
        int n = tokens.size(); 

        return calc(tokens, n-1); 
    }
};

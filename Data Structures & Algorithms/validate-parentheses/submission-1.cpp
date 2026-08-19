class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(int i=0; i<s.size(); i++) {
            if(s[i] == ')') {
                if(st.size() == 0 || st.top() != '(') return false;
                st.pop();
            } else if(s[i] == ']') {
                if(st.size() == 0 || st.top() != '[') return false;
                st.pop();
            } else if(s[i] == '}') {
                if(st.size() == 0 || st.top() != '{') return false;
                st.pop();
            } else {
                st.push(s[i]);
            }
        }

        if(st.size() != 0) return false;
        return true;
    }
};

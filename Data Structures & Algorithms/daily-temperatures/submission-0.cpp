class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st; 
        vector<int> ans(temperatures.size(), 0); 

        for(int i=0; i<temperatures.size(); i++) {
            int curr = temperatures[i]; 
            while(st.size() > 0) {
                int index = st.top(); 

                if(temperatures[index] < curr){
                    st.pop(); 
                    ans[index] = i-index;
                } else {
                    break;
                }
            }
            st.push(i); 
        }

        return ans;
    }
};

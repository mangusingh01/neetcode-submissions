class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> ans; 
        int start=-1; int end=-1; 

        for(int i=0; i<intervals.size(); i++) {
            if(start == -1) {
                start = intervals[i][0];
                end = intervals[i][1];
            } else if (end >= intervals[i][0]){
                end = max(end, intervals[i][1]);
            } else {
                ans.push_back({start, end});
                start = intervals[i][0];
                end = intervals[i][1];
            }
        }

        ans.push_back({start, end});

        return ans;

    }
};

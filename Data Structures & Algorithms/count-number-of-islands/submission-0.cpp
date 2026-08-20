class Solution {
public:
    void mark(vector<vector<char>>& grid, vector<vector<bool>>& vis, int i, int j) {
        if(i >= grid.size() || j >= grid[0].size()) return;
        if(vis[i][j]) return;

        vis[i][j] = true;
        if(i+1 < grid.size() && grid[i+1][j]=='1') mark(grid, vis, i+1, j);
        if(i-1 >= 0 && grid[i-1][j]=='1') mark(grid, vis, i-1, j);
        if(j+1 < grid[0].size() && grid[i][j+1]=='1') mark(grid, vis, i, j+1);
        if(j-1 >= 0 && grid[i][j-1]=='1') mark(grid,vis,i, j-1);
        return;
    } 
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size(); int n=grid[0].size();

        vector<vector<bool>> vis(m, vector<bool>(n,false));
        int ans = 0;

        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(vis[i][j]) continue;
                if(grid[i][j] == '1') {
                    mark(grid, vis, i, j);
                    ans++;
                }
            }
        }

        return ans;
        
    }
};

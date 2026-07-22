class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // rows
        for(int i=0; i<9; i++) {
            unordered_set<char> s; 
            for(int j=0; j<9; j++) { 
                if(board[i][j] == '.') continue; 
                if(s.find(board[i][j]) != s.end()) return false;
                s.insert(board[i][j]);
            }
        }

        // cols
        for(int i=0; i<9; i++) {
            unordered_set<char> s; 
            for(int j=0; j<9; j++) { 
                if(board[j][i] == '.') continue; 
                if(s.find(board[j][i]) != s.end()) return false;
                s.insert(board[j][i]);
            }
        }

        // 3x3 boxes
        for(int i=0; i<3; i++) {
            for(int j=0; j<3; j++) {
                int startRow = i*3; 
                int endRow = startRow + 3; 
                int startCol = j*3;
                int endCol = startCol + 3;

                unordered_set<char> s;
                for(int x=startRow; x<endRow; x++) {
                    for(int y=startCol; y<endCol; y++) {
                        if(board[x][y] == '.') continue; 
                        if(s.find(board[x][y]) != s.end()) return false;
                        s.insert(board[x][y]);
                    }
                }
            }
        }
        return true;        
    }
};

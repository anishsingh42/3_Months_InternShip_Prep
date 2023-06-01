class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int row[9][9] = {0};
        int col[9][9] = {0};
        int grid[3][3][9] = {0};
        
        for(int r=0;r<9;r++){
            for(int c=0;c<9;c++){
                if(board[r][c] == '.') continue;
                
                int cnt = board[r][c] - '1';
                if(row[r][cnt]++) return false;
                if(col[cnt][c]++) return false;
                if(grid[r/3][c/3][cnt]++) return false;
            }
        }
        return true;
    }
};
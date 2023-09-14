class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int row[9][9] = {0};
        int col[9][9] = {0};
        int grid[3][3][9] = {0};
        
        for(int r = 0; r < board.size(); r++){
            for(int c = 0; c < board[0].size(); c++){
                if(board[r][c] != '.'){
                    int index = board[r][c] - '1';
                    if(row[r][index]++) return false;
                    if(col[index][c]++) return false;
                    if(grid[r/3][c/3][index]++) return false;
                }
            }
        }
        return true;
    }
};
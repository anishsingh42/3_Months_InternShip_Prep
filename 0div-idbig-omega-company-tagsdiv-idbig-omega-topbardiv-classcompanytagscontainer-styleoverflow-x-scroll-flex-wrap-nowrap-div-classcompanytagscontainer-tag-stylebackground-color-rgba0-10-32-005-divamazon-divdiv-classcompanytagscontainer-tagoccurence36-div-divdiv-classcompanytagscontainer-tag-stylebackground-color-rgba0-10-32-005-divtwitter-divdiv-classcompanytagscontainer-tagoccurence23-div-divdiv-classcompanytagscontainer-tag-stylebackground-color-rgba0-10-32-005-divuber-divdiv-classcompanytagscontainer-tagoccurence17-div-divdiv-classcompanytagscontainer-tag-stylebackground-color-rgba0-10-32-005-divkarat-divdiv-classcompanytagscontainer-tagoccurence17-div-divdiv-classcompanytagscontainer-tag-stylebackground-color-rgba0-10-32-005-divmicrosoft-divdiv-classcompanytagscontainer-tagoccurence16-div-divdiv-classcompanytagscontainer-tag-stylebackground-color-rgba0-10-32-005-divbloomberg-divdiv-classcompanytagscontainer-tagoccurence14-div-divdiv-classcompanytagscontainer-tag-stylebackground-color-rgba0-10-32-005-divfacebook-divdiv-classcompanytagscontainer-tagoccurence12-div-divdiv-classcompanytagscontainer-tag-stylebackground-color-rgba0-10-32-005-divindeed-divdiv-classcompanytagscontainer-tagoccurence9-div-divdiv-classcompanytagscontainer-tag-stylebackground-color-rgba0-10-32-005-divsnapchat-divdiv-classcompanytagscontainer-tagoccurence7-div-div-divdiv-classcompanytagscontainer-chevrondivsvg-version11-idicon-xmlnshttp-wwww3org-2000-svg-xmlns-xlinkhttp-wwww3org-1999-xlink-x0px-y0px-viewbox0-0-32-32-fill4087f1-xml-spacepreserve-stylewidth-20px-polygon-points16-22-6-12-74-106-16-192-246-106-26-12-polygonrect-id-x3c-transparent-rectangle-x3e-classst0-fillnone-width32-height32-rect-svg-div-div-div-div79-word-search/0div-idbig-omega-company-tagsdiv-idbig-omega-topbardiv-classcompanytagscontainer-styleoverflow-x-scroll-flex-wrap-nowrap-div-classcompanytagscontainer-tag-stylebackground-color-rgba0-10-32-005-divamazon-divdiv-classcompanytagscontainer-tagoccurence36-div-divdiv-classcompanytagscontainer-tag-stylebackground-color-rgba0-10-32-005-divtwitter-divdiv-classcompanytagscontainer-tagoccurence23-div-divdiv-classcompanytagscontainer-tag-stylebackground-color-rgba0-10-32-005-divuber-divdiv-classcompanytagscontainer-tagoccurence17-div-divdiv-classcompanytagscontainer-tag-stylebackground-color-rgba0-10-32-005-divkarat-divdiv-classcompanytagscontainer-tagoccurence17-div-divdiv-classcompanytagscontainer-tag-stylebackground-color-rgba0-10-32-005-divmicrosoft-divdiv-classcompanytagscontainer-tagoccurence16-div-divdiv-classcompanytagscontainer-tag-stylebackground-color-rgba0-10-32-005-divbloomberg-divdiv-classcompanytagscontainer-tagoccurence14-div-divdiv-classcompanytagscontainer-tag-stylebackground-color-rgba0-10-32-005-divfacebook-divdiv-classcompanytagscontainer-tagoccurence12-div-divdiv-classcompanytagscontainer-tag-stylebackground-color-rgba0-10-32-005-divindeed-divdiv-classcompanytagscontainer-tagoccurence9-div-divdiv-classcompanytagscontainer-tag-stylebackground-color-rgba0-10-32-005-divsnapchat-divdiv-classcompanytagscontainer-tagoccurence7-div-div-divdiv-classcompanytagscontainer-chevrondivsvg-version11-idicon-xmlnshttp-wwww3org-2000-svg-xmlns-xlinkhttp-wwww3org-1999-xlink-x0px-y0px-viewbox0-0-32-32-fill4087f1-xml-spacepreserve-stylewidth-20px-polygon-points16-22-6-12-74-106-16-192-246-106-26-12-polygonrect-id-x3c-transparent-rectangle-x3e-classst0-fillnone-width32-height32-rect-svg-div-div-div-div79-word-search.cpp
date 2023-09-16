class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        //logic : traverse each and every charcter and move too its adjacent places
        for(int i = 0; i < board.size(); i++){
            for(int j = 0; j <board[0].size(); j++){
                if(adjacent_char(board, word, i, j, 0)) return true;
            }
        }
        
        return false;
    }
    
    
    
    bool adjacent_char(vector<vector<char>> &board, const string &word, int r, int c, int index){
        //base condition 
        if(index == word.size()) return true; // found all the charcters in the word so far in the board
        if(r < 0 or c < 0 or r > board.size()-1 or c > board[0].size()-1) return false; // out of bounds 
        if(board[r][c] != word[index]) return false; // doesnot match the character
        
        
        //found a match
        board[r][c] = '*'; // to not make duplicates and get caught in a infinite loop 
        bool furtherSearch = adjacent_char(board, word, r-1, c, index+1) or // up
                             adjacent_char(board, word, r+1, c, index+1) or // down
                             adjacent_char(board, word, r, c-1, index+1) or // left
                             adjacent_char(board, word, r, c+1, index+1);
        board[r][c] = word[index]; // modify it astrik back to original char
        return furtherSearch;
        
    }
};
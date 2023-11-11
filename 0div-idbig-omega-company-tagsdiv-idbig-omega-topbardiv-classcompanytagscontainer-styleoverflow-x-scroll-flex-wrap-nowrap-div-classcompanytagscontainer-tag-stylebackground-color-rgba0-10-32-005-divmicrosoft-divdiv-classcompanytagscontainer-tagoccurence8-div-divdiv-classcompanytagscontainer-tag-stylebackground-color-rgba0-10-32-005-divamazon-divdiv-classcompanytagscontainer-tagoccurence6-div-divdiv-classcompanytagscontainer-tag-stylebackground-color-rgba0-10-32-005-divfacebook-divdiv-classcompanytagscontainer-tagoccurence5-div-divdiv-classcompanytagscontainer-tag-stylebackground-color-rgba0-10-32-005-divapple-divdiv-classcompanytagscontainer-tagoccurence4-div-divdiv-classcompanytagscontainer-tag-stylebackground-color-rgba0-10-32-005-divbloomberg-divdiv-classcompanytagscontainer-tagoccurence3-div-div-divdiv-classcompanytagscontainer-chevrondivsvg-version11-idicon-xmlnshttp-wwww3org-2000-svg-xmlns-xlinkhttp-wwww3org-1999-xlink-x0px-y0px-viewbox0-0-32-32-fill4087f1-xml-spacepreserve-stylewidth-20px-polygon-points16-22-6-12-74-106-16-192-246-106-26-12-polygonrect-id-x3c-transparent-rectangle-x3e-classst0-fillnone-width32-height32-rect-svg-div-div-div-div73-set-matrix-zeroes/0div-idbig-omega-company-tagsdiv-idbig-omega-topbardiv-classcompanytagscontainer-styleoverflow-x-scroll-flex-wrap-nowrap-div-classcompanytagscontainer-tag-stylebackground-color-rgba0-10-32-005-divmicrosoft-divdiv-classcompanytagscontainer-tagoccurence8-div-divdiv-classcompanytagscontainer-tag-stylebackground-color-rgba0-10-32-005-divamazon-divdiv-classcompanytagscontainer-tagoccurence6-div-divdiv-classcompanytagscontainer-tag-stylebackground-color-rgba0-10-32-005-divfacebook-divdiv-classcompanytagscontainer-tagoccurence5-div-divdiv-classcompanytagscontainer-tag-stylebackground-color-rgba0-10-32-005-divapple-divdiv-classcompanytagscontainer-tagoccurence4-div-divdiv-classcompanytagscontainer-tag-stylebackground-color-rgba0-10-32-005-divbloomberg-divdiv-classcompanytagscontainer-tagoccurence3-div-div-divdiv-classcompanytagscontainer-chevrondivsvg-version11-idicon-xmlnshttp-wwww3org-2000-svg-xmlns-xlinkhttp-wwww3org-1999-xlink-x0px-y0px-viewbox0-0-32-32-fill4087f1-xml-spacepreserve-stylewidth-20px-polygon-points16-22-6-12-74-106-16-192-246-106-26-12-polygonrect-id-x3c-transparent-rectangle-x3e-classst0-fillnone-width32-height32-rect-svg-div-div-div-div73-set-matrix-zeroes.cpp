class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool isRow0 = false, isCol0 = false;
        
        //traverse the 0th row and col to find whether they have zero or not
        for(int r = 0; r < matrix.size(); r++){
            if(matrix[r][0] == 0) isCol0 = true;
        }
        
        for(int c = 0; c < matrix[0].size(); c++){
            if(matrix[0][c] == 0) isRow0 = true;
        }
        
        
        //traverse the remaining matrix in search of zero and if found update the rowNo and colNo with 0 in 0th row and col
        for(int i = 1; i < matrix.size(); i++){
            for(int j = 1; j < matrix[0].size(); j++){
                if(matrix[i][j] == 0){
                    matrix[0][j] = 0;
                    matrix[i][0] = 0;
                }
            }
        }
        
        //update the entire row and col with zero if zero is found
        for(int i = 1; i < matrix.size(); i++){
            for(int j = 1; j < matrix[0].size(); j++){
                if(matrix[0][j] == 0 or matrix[i][0] == 0){
                    matrix[i][j] = 0;
                }
            }
        }
        
        //update the 0th Row and col
        if(isRow0){
            for(int c = 0; c < matrix[0].size(); c++){
                matrix[0][c] = 0;
            }
        }
        
        if(isCol0){
            for(int r = 0; r < matrix.size(); r++){
                matrix[r][0] = 0;
            }
        }
    }
};
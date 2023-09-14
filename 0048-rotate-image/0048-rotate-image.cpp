class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //logic 
        /*
        * take the trasnpose of the entire matrix
        * reverse the n-1 col with the 0th col and so on
        */
        
        //transpose
        for(int i = 0;i < matrix.size(); i++){
            for(int j = i; j < matrix[0].size(); j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        
        //reverse the transpose
        for(int c = 0; c < matrix[0].size()/2; c++){
            for(int r = 0; r < matrix.size(); r++){
                swap(matrix[r][c], matrix[r][matrix[0].size() - c - 1]);
            }
        }
    }
};
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
         //4 variables maintaince 
        int rowstart = 0;
        int rowend = matrix.size()-1;
        
        int colstart = 0;
        int colend = matrix[0].size()-1;
        int count = 0;
        int total = matrix.size() * matrix[0].size();
        vector<int> res;
        
        while(count < total){
            //left to right 
            for(int i = colstart; count < total and i <= colend; i++){
                res.push_back(matrix[rowstart][i]);
                count++;
            }
            rowstart++;
            //up to down
            for(int i = rowstart; count < total and i <= rowend; i++){
                res.push_back(matrix[i][colend]);
                count++;
            }
            colend--;

            //right to left
            for(int i = colend; count < total and i >= colstart; i--){
                res.push_back(matrix[rowend][i]);
                count++;
            }
            rowend--;
            //down to up
            for(int i = rowend; count < total and i >= rowstart; i--){
                res.push_back(matrix[i][colstart]);
                count++;
            }
            colstart++;
        }
        return res;
    }
};
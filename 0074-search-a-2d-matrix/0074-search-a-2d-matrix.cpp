class Solution {
public:
    bool searchMatrix(vector<vector<int>>& a, int target) {
        int n = a.size();
        int m = a[0].size();
        int row = 0;
        int col = m-1;
        while(row < n and col > -1){
            if(a[row][col] == target) return true;
            else if(a[row][col] < target) row++;
            else col--;
        }
        return false;
    }
};
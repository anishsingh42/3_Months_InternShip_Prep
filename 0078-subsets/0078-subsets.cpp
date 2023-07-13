class Solution {
public:
    vector<vector<int>> solve(vector<int> & arr,int i, vector<int> op, vector<vector<int>>&soln){
        if(i==arr.size()){
            soln.push_back(op);
            return soln;
        }
        vector<int> op1 = op;
        vector<int> op2 = op;
        
        op2.push_back(arr[i++]);
        solve(arr,i,op1,soln);
        solve(arr,i,op2,soln);
        return soln;
    }
    vector<vector<int>> subsets(vector<int>& arr) {
        vector<vector<int>> soln;
        vector<int>op;
        solve(arr,0,op,soln);
        return soln;
    }
};
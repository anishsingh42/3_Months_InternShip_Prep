class Solution {
public:
    vector<vector<int>> solve(vector<int> & arr,int i, vector<int> op, vector<vector<int>>&soln){
        if(i==arr.size()){
            soln.push_back(op);
            return soln;
        }
        //exclude the selection of current element
        solve(arr,i+1,op,soln);
        //select the current element
        op.push_back(arr[i]);
        solve(arr,i+1,op,soln);
        return soln;
    }
    vector<vector<int>> subsets(vector<int>& arr) {
        vector<vector<int>> soln;
        vector<int>op;
        solve(arr,0,op,soln);
        return soln;
    }
};
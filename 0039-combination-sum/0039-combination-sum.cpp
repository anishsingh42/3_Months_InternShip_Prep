class Solution {
public:
    void solve(vector<int> arr, int index, int target, vector<int> op, vector<vector<int>> &res){
        if(target == 0){
            res.push_back(op);
            return;
        }
        
        
        if(target < 0) return; //no target found
        if(index >= arr.size()) return; // out of bounds
        
        solve(arr, index+1, target, op, res);//not take the current number and move to the next index
        op.push_back(arr[index]);
        solve(arr, index, target-arr[index], op, res);//or take the current number and stay at the same index
        return;
    } 
        
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>> res;
        vector<int> op;
        solve(arr, 0, target, op, res);
        return res;
    }
};
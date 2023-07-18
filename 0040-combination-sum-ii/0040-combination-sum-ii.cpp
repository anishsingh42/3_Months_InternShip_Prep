class Solution {
public:
    void solve(vector<int> arr, int target, int index, vector<int> op, vector<vector<int>>&res){
        if(target == 0){
            res.push_back(op);
            return;
        }
        if(target < 0 || index >= arr.size()) return;
        
        for(int i = index; i < arr.size(); i++) {
            // Skip duplicates
            if (i > index && arr[i] == arr[i - 1]) {
                continue;
            }
            
            op.push_back(arr[i]);
            solve(arr, target - arr[i], i + 1, op, res);
            op.pop_back();
        }
        
        // solve(arr, target, index+1, op, res); // u dont take the element in the op 
        return;
    }
    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
        vector<vector<int>> res;
        vector<int> op;
        sort(arr.begin(), arr.end());
        solve(arr, target, 0, op, res);
        return res;
    }
};
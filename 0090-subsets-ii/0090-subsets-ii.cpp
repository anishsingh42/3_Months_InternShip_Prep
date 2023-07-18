class Solution {
public:
    void solve(vector<int> arr, int index, vector<int> op, vector<vector<int>>& res) {
        res.push_back(op);  // Include the empty subset and the current subset at each index
        
        for (int i = index; i < arr.size(); i++) {
            if (i > index && arr[i] == arr[i - 1]) {
                continue;  // Skip duplicates
            }
            
            op.push_back(arr[i]);
            solve(arr, i + 1, op, res);
            op.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> op;
        sort(nums.begin(), nums.end());
        solve(nums, 0, op, res);
        return res;
    }
};



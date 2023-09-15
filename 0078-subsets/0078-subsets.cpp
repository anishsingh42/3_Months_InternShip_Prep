class Solution {
public:
    void make_subsets(vector<int> &nums, vector<vector<int>> &res, int index, vector<int> op){
        //base case
        if(index == nums.size()){
            res.push_back(op);
            return;
        }
        
        //hypothesis and induction 
        
        //reject the element
        make_subsets(nums, res, index+1, op);
        //choose the element
        op.push_back(nums[index]);
        make_subsets(nums, res, index+1, op);
        
        return;
        
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> op;
        make_subsets(nums, res, 0, op);
        return res;
    }
};
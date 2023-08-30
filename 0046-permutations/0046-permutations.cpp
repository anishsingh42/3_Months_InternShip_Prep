class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        int n = nums.size()-1;
        permutation(res, nums, 0, n);
        return res;
    }
    
    void permutation(vector<vector<int>> &res, vector<int> &nums, int index, int n){
        if(index == n){
            res.push_back(nums);
            return;
        }
        
        
        for(int i=index;i<=n;i++){
            swap(nums[index], nums[i]);
            permutation(res, nums, index+1, n);
            swap(nums[index], nums[i]);
        }
        
        return;
    }
};
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> powerset;
        int n = nums.size();
        for(int num = 0; num < (1<<n); num++){
            vector<int>subset;
            for(int mask = 0; mask < n; mask++){
                if(num & (1 << mask)) subset.push_back(nums[mask]);
            }powerset.push_back(subset);
        }
        return powerset;
    }
};
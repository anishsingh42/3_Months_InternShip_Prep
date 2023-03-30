class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> index;
        unordered_map<int, int> mp;
        for(int i=0;i<nums.size();i++){
            int diff = target - nums[i];
            if(mp.find(diff) != mp.end()){
                index.push_back(i);
                index.push_back(mp[diff]);
                return index;
            }
            mp[nums[i]] = i;
        }
        return index;
    }
};
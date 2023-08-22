class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        vector<int> index;
        
        for(int i=0;i<nums.size();i++){
            int diff = target - nums[i];
            if(mp.find(diff) != mp.end()){
                index.push_back(i);
                index.push_back(mp[diff]);
            }else{
                mp.insert({nums[i], i});
            }
        }
        return index;
    }
};
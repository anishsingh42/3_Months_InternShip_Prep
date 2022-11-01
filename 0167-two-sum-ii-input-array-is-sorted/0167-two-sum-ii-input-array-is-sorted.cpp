class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int>mp;
        vector<int>index;
        for(int i=0;i<numbers.size();i++){
            int diff = target - numbers[i];
            if(mp.find(diff) != mp.end()){
                index.push_back(mp[diff]+1);
                index.push_back(i+1);
                return index;
            }
            mp[numbers[i]] = i;
        }
        
        return index;
    }
};
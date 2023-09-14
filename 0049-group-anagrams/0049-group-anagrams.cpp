class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mpp;
        
        for(string s : strs){
            string tmp = s;
            sort(s.begin(), s.end());
            mpp[s].push_back(tmp);
        }
        
        vector<vector<string>> res;
        
        for(auto it : mpp){
            res.push_back(it.second);
        }
        
        return res;
    }
};
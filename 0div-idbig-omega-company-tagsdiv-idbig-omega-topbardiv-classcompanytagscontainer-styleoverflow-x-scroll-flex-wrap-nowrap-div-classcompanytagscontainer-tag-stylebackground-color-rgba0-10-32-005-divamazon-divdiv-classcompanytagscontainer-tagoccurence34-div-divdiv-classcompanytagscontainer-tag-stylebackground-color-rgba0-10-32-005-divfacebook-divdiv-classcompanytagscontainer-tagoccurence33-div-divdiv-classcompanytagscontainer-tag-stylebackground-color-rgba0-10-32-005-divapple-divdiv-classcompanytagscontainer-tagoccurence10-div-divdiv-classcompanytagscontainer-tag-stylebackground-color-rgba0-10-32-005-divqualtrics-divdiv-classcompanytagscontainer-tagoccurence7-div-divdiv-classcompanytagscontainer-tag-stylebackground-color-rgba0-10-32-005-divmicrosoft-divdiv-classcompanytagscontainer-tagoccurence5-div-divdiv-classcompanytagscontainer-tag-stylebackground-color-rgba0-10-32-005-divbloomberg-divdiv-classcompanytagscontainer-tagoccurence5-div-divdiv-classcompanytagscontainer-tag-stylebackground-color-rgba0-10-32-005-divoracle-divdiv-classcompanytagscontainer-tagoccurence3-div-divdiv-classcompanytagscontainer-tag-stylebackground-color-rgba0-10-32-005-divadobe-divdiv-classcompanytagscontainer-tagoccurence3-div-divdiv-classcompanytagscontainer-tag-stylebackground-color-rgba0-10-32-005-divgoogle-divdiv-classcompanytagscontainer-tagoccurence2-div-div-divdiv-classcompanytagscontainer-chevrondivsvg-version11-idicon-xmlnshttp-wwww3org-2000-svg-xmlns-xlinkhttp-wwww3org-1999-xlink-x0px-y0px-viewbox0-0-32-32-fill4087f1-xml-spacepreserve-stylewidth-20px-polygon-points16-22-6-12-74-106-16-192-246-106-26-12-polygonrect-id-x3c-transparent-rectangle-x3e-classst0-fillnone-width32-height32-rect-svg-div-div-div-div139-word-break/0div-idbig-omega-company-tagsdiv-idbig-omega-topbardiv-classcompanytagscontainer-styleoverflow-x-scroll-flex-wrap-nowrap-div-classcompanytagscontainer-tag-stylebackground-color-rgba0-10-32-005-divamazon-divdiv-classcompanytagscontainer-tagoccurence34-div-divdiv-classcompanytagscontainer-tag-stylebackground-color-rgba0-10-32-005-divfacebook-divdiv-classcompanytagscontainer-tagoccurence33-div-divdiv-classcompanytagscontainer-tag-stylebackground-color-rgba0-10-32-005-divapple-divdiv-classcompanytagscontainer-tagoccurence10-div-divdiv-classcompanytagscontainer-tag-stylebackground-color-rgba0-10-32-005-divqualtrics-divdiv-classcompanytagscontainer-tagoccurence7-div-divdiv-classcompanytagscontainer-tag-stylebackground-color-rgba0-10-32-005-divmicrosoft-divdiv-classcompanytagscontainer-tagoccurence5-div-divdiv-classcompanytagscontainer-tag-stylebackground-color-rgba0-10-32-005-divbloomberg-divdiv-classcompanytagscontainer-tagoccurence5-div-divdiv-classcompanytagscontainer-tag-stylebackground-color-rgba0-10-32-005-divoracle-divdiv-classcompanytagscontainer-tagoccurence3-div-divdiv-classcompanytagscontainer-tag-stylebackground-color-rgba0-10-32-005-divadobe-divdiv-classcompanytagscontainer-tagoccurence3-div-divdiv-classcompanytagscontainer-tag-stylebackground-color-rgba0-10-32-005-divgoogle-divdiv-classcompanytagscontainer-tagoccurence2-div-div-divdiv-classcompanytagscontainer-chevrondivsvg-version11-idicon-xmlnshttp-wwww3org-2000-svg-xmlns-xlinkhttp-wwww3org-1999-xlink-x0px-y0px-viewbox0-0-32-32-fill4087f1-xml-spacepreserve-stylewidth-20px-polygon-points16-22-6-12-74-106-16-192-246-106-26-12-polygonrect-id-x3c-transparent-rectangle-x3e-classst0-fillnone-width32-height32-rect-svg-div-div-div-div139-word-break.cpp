class Solution {
public:
    unordered_set<string> dict;
    int n;
    int dp[301];
    bool solve(int idx, string &s){
        if(idx >= n) return true;
        if(dict.find(s) != dict.end()) return true;
        if(dp[idx] != -1) return dp[idx];
        
        for(int l = 1; l <= n; l++){
            string tmp = s.substr(idx, l);
            if(dict.find(tmp) != dict.end() and solve(idx+l, s)){
                return dp[idx] = true;
            }
        }
        
        return dp[idx] = false;
    }
    
    bool wordBreak(string s, vector<string>& wordDict) {
        n = s.size();
        memset(dp, -1, sizeof(dp));
        for(string &wrds: wordDict){
            dict.insert(wrds);
        }
        
        return solve(0, s);
    }
};
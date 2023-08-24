class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int max_cnt = 0;
        unordered_map<char, int> mp;
        int i=0;
        for(int j=0;j<n;j++){
            if(mp.find(s[j]) != mp.end()) i = max(i, mp[s[j]]+1);
            mp[s[j]] = j;
            max_cnt = max(max_cnt, j-i+1);
        }
        
        return max_cnt;
    }
};
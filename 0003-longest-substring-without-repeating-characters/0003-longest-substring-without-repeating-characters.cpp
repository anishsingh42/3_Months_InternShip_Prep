class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max_cnt = 0;
        int nxt_index = 0;
        unordered_map<char, int> mp;
        for(int i=0;i<s.size();i++){
            if(mp.find(s[i]) != mp.end()) nxt_index = max(nxt_index, mp[s[i]]+1);
            mp[s[i]] = i;
            max_cnt = max(max_cnt, i - nxt_index + 1);
        }
        
        return max_cnt;
    }
};
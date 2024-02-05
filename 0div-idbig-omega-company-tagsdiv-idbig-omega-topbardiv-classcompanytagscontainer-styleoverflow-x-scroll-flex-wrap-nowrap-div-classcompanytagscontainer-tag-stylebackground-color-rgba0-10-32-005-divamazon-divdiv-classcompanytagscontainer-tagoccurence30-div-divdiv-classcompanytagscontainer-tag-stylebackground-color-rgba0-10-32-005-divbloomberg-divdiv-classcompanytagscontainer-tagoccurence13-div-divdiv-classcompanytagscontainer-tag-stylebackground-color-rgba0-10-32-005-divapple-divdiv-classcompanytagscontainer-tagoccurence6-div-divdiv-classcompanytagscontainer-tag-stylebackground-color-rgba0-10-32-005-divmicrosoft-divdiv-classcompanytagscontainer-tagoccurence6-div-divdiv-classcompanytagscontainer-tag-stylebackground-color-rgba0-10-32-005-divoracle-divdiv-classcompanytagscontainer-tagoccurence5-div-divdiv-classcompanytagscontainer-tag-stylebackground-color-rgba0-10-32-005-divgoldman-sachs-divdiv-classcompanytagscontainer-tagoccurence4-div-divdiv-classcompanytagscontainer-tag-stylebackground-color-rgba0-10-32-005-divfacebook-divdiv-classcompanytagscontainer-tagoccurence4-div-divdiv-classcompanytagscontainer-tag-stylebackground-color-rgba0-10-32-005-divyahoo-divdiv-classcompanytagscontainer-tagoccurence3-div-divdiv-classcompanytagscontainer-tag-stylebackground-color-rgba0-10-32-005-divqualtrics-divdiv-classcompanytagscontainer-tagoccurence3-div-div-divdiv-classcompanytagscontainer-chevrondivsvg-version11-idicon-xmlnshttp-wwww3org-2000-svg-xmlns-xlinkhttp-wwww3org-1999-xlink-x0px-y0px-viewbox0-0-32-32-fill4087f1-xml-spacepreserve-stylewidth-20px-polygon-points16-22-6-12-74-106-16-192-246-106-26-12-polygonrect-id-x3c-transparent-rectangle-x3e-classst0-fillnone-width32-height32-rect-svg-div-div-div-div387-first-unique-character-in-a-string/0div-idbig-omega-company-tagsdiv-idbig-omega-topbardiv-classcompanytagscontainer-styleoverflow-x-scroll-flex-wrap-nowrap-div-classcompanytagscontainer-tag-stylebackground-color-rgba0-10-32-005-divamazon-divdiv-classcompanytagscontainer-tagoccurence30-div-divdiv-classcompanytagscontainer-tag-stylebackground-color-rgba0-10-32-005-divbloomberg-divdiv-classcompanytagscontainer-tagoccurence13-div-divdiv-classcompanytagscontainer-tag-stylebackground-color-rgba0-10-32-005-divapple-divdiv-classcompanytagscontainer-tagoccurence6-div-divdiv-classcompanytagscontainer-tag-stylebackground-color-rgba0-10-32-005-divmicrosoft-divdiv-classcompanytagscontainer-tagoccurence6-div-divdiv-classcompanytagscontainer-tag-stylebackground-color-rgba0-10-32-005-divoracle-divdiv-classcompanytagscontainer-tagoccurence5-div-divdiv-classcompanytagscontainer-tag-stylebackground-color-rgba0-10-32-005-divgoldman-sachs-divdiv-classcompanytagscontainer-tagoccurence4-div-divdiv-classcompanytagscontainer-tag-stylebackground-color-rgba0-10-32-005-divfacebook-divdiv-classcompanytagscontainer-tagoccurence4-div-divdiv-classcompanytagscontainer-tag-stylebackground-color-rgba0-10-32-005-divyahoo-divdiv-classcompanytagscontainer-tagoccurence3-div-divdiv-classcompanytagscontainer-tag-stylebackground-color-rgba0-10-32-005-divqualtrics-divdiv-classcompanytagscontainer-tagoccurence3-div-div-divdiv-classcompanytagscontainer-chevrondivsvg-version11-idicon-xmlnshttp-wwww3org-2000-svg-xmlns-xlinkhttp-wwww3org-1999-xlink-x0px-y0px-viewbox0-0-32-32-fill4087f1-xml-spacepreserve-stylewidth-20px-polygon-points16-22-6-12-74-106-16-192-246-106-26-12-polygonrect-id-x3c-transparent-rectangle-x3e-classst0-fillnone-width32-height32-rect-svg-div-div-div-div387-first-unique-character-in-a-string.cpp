class Solution {
public:
    int firstUniqChar(string s) {
        int ans = -1;
        
        int alpha[26] = {0};
        
        for(int i = 0; i<s.size(); i++){
            int n = s[i] - 'a';
            alpha[n]++;
        }
        
        for(int i = 0; i < s.size(); i++){
            if(alpha[s[i] - 'a'] == 1){
                return i;
            }
        }
        
        return -1;
    }
};
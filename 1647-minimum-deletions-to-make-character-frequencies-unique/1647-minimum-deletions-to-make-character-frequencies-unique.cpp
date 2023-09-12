class Solution {
public:
    int minDeletions(string s) {
        int del = 0;
        vector<int> alpha(26, 0);
        for(char c: s){
            alpha[c - 'a']++;
        }
        sort(alpha.begin(), alpha.end());
        for(int i=24;i>=0;i--){
            if(alpha[i] == 0) break;
            if(alpha[i] >= alpha[i+1]){
                int prev = alpha[i];
                alpha[i] = max(0, alpha[i+1]-1);
                del += prev - alpha[i];
            }
        }
        
        return del;
    }
};
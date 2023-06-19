class Solution {
public:
    int strStr(string str, string pat) {
        int n = str.size();
        int m = pat.size();
        
        vector<int> lps = kmpprocess(pat);
        
        for(int i=0,j=0;i<n;){
            if(str[i] == pat[j]){
                i++;
                j++;
            }
            if(j==m) return i-j;
            if(i<n && str[i] != pat[j]) j ? j=lps[j-1] : i++;
        }
        
        return -1;
    }
    private:
    vector<int> kmpprocess(string pat){
        int m = pat.size();
        vector<int> lps(m,0);
        
        for(int i = 1, len = 0; i < m ;){
            if(pat[i] == pat[len]){
                lps[i++] = ++len;
            }
            else if(len) len = lps[len-1];
            else lps[i++] = 0;
        }
        
        return lps;
    }
};
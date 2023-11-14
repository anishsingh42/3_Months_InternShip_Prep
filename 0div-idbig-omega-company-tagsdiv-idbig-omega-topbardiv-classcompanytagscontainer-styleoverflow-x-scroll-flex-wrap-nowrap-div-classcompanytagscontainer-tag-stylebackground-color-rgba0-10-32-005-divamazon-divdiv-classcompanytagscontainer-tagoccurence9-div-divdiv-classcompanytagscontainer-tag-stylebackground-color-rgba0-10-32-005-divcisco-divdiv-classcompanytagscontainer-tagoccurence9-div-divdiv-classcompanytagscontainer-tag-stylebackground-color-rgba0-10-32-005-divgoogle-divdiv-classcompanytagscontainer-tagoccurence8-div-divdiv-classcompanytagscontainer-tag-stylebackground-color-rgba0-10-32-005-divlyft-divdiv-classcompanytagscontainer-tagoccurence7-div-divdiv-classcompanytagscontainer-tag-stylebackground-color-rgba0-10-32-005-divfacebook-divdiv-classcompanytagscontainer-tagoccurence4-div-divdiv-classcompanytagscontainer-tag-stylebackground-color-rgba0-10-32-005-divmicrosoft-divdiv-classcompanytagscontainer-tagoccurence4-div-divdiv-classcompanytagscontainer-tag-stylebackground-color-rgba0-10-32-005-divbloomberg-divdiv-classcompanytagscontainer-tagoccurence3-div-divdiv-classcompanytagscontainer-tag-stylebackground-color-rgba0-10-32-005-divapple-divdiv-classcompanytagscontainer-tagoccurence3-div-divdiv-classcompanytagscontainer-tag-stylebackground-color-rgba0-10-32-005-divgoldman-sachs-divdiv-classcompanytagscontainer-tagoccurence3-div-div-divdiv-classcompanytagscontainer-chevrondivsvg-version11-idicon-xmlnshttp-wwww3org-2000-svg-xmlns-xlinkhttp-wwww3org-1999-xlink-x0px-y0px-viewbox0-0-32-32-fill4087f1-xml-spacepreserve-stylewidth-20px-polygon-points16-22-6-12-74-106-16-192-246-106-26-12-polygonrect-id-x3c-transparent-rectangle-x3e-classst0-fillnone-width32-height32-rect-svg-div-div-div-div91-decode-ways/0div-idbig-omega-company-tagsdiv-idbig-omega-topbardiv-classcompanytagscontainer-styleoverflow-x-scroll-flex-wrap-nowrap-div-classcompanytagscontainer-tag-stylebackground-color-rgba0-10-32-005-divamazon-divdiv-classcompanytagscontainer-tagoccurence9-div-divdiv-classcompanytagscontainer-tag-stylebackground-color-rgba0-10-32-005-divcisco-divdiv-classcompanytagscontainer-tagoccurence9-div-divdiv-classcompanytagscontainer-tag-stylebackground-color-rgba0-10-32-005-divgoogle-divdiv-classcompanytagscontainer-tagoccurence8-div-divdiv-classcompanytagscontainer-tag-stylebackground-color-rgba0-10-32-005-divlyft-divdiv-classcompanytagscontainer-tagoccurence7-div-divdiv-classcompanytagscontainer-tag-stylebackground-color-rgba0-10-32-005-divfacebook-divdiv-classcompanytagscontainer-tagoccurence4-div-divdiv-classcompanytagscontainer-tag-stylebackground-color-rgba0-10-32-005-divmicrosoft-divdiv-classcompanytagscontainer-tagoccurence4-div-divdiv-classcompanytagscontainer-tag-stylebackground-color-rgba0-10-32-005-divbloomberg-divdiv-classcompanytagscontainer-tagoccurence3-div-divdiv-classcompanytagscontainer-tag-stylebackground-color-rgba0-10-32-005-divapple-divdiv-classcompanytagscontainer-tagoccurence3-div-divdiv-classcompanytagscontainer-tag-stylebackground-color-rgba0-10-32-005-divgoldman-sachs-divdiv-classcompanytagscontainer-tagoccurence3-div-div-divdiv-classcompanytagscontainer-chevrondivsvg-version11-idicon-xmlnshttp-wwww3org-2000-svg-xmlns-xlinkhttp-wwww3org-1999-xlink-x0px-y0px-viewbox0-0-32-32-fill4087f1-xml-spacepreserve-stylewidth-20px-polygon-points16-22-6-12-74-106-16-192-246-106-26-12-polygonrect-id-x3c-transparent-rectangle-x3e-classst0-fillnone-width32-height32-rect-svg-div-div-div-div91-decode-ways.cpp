class Solution {
public:
    int dp[101] = {0};
    int decode(string &s, int index){
        //dp memoizaiton soln 
        //base case 
        if(index < s.size() and s[index] == '0') return 0;
        if(index >= s.size()) return 1;
        if(dp[index]) return dp[index];
        
        //single char
        if(s[index] != '0') dp[index] += decode(s, index+1);
        
        //two char
        if(index+1 < s.size() and ((s[index] == '1' and s[index+1] <= '9') or (s[index] == '2' and s[index+1] < '7')))
            dp[index] += decode(s, index+2);
        
        return dp[index];
    }
    
    int numDecodings(string s) {
        return decode(s, 0);
    }
};
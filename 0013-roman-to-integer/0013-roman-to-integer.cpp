class Solution {
public:
    int romanToInt(string s) {
        // int nos[7] = [1,5,10,50,100,500,1000];
        int ans = 0;
        
        for(int i=0;i<s.size();i++){
            if(s[i] == 'I')
            {
                if(i+1 < s.size() and (s[i+1] == 'X' || s[i+1] == 'V')) ans -= 1;
                else ans += 1;
            }
            if(s[i] == 'V') ans += 5;
            if(s[i] == 'X')
            {
                if(i+1 < s.size() and (s[i+1] == 'C' || s[i+1] == 'L')) ans -= 10;
                else ans += 10; 
            }
            if(s[i] == 'L') ans += 50;
            if(s[i] == 'C')
            {
                if(i+1 < s.size() and (s[i+1] == 'M' || s[i+1] == 'D')) ans -= 100;
                else ans += 100;     
            }
            if(s[i] == 'D') ans += 500;
            if(s[i] == 'M') ans += 1000;
        }
        
        return ans;
        
    }
};
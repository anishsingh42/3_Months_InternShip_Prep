class Solution {
public:
    string reorganizeString(string s) {
        vector<int> cnt(26, 0);
        int maxFreq = 0;
        //finding the maximum freq character and keeping track of frequency of all the characters
        for(char c : s){
            cnt[c - 'a']++;
            if(cnt[c - 'a'] > cnt[maxFreq]) maxFreq = c - 'a';
        }
    
        //check the base case : if the maxFreq char > size/2 + 1 then return empty string
        if(2 * cnt[maxFreq] - 1 > s.size()) return "";
        
        //follow the greedy method
        //fill the alternate postion of the string with the most frequent character
        
        int i = 0;
        while(cnt[maxFreq]){
            s[i] = ('a' + maxFreq);
            cnt[maxFreq]--;
            i+=2;
        }
        
        // now fill the remaining area with the second frequent character, the third frequent character and so on ..      
        for(int j = 0; j < 26 ; j++){
            while(cnt[j]){
                if(i >= s.size()) i=1;
                s[i] = ('a' + j);
                cnt[j]--;
                i+=2;
            }
        }
        
        return s;
    }
};
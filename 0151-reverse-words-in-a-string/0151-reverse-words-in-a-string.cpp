class Solution {
public:
    string reverseWords(string s) {
        int left = 0;
        int right =  s.length();
        string wrd = "";
        string ans = "";
        
        while(left < right){
            char ch = s[left];
            if(ch != ' ') wrd += ch;
            else if(ch == ' '){
                if(wrd != ""){
                    if(ans!="") ans = wrd + " " + ans;
                    else ans = wrd;
                    wrd = "";
                }
            }left++;
        }
        if(wrd!=""){
            if(ans!="") ans = wrd + " " + ans;
            else ans = wrd;
        }
        return ans;
    }
};
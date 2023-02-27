#include <bits/stdc++.h>
class Solution {
public:
    bool isPalindrome(string s) {
        if(s == "" || s == " " || s.size() == 1) return true;
        string str = "";
        string tmp = "";
        for(int i=0;i<s.size();i++){
            if((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122) || (s[i] >= 48 && s[i] <= 57)){
                if((s[i] >= 65 && s[i] <= 90)){
                    s[i] += ('a' - 'A');
                }
            str += s[i];
            tmp += s[i];
            }
            
        }
        reverse(str.begin(), str.end());
        // cout << s << "     "<<str << '\n';
        if(str == tmp) return true;
        else return false;
    }
};
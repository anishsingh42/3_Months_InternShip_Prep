class Solution {
public:
    string countAndSay(int n, string s = "1") {
        if(n==1) return s; // base case if n == 1 return 1
        //if not enter a recursive solution 
        int i = 0;
        int j;
        int len = s.size();
        string ans = "";
        //iterate each and every charater in the string 
        while(i < len){
            j = i;
            //find the number of same elements in the string and note the count
            while(i < len and s[i] == s[j]) i++;
            ans += to_string(i-j) + s[j];
        }
        return countAndSay(n-1, ans);
    }
};
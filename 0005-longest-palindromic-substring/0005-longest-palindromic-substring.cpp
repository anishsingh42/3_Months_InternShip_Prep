class Solution {
public:
    string longestPalindrome(string s) {
        string res = "";
        int resLen = 0;

        for (int i = 0; i < s.size(); i++) {
            int left, right;

            // Check for odd length palindromes
            left = i;
            right = i;
            while (left >= 0 && right < s.size() && s[left] == s[right]) {
                if (right - left + 1 > resLen) {
                    res = s.substr(left, right - left + 1);
                    resLen = res.size();
                }
                left--;
                right++;
            }

            // Check for even length palindromes
            left = i;
            right = i + 1;
            while (left >= 0 && right < s.size() && s[left] == s[right]) {
                if (right - left + 1 > resLen) {
                    res = s.substr(left, right - left + 1);
                    resLen = res.size();
                }
                left--;
                right++;
            }
        }

        return res;
    }
};

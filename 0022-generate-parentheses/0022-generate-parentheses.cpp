class Solution {
public:
    vector<string>res;
    void helper(int n, int open, int close, string current){
        //base condition 
        if(current.size() == n*2){
            res.push_back(current);
            return;
        }
        if(open < n) helper(n,open+1,close,current+"(");
        if(close < open) helper(n,open,close+1,current+")");
    }
    vector<string> generateParenthesis(int n) {
        helper(n,0,0,"");
        return res;
    }
};
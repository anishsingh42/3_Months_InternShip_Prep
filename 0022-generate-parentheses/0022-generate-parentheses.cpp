class Solution {
public:
    void solve(int open, int close, string op, vector<string>& res){
        //base condition
        if(open == 0 and close == 0){
            res.push_back(op);
            return;
        }
        
        //add open bracket
        if(open!=0) solve(open-1, close, op+"(", res);        
        //add close bracket
        if(close > open) solve(open, close-1, op+")", res);
        return;
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        solve(n, n, "", res);
        return res;
    }
    
};
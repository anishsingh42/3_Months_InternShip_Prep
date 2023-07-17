class Solution {
public:
    void solve(string ip, string op, vector<string>& res) {
        if (ip.size() == 0) {
            res.push_back(op);
            return;
        }

        if(isdigit(ip[0])){
            string op0 = op+ip[0];
            ip.erase(ip.begin());
            solve(ip,op0,res);
        }
        else{
            string op1 = op;
            string op2 = op;
            op1.push_back(tolower(ip[0]));
            op2.push_back(toupper(ip[0]));
            ip.erase(ip.begin());
            solve(ip, op1, res);
            solve(ip, op2, res);
        }
        return;
    }

    vector<string> letterCasePermutation(string s) {
        vector<string> res;
        string op = "";
        solve(s, op, res);
        return res;
    }
};
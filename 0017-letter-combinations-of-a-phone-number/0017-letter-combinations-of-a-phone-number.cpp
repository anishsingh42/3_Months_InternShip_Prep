class Solution {
public:
    void solve(string digits, string mpp[], int index, string &output, vector<string> &res){
        if(index == digits.size()){
            if(output != "") {
                res.push_back(output);
            }
            return;
        }
        
        int num = digits[index] - '0';
        string characters = mpp[num];
        
        for(int i = 0; i < characters.size(); i++){
            output.push_back(characters[i]);
            solve(digits, mpp, index + 1, output, res);
            output.pop_back();
        }
        return;
    }
    
    vector<string> letterCombinations(string digits) {
        int index = 0;
        string mpp[10] = {
            "",
            "",
            "abc",
            "def",
            "ghi",
            "jkl",
            "mno",
            "pqrs",
            "tuv",
            "wxyz"
        };
        string output = ""; // Fixed the variable name here
        vector<string> res;
        solve(digits, mpp, index, output, res);
        return res;
    }
};

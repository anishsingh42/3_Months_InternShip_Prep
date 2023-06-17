class Solution {
public:
    string commonPrefix(string a, string b){
        if(b.size() < a.size()) return commonPrefix(b,a);
        string temp = "";
        for(int i=0;i<a.size();i++){
            if(a[i] == b[i]) temp += a[i];
            else break;
        }
        return temp;
            
    }
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";
        if(strs.empty()) return res;
        if(strs.size() == 1) return strs[0];
        
        // sort(strs.begin(), strs.end());
        res = commonPrefix(strs[0], strs[1]);
        for(int i=2;i<strs.size();i++){
            string prefix = commonPrefix(res, strs[i]);
            if(prefix.empty()){res = prefix; break;}
            else res  = prefix;
        }

        return res;
    }
};
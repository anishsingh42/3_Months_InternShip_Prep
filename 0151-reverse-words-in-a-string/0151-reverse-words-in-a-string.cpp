class Solution {
public:
    string reverseWords(string s) {
        string op;
        stack<string> st;
        string wrd ="";
        int i=0;
        while(i < s.length()){
            if(s[i] != ' '){
                wrd = "";
                while(i<s.length() && s[i] != ' '){
                    wrd += s[i];
                    i++;
                }st.push(wrd);
            }i++;
        }
        
        
        while(!st.empty()){
            op += st.top();
            st.pop();
            if(!st.empty()) op += " ";
        }
        return op;
    }
    
 /*
 * Time Complexity : o(n)
 * Space Complexity : o(n)
 
 */
};
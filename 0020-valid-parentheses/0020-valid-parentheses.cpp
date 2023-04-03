class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        for(char it:s){
            if(it=='(' || it=='{' || it=='[') st.push(it);
            else{
                if(st.empty() || (it!=']' and st.top()=='[') || (it!='}' and st.top()=='{') || (it!=')' and st.top()=='(') ) return false;
            st.pop();
                }
        }
        
        return st.empty();
    }
};
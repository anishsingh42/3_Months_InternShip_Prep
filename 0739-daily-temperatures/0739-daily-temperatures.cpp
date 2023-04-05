class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        int n = t.size();
        stack<int> st;
        vector<int> ans(n,0);
        
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && t[st.top()] <= t[i]){
                st.pop();
            }
            if(!st.empty()){
                int j=st.top();
                ans[i] = j-i;
            }
            st.push(i);
        }
        return ans;
    }
};
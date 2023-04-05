class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& a) {
        int n = a.size();
        stack<int> st;
        vector<int> ans(n,-1);
        
        for(int i=2*n-1;i>=0;i--){
            while(!st.empty() && st.top() <= a[i%n]){
                st.pop();
            }
            // if(i<n){
                if(!st.empty())
                    ans[i%n] = st.top();
            // }
            st.push(a[i%n]);
        }
        
        return ans;
    }
};
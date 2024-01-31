class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int size = temperatures.size();
        vector<int> ans(size, 0);
        stack<int> st;
        for(int i=size-1; i>=0; i--){
            while(!st.empty() and temperatures[st.top()] <= temperatures[i]){
                st.pop();
            }
            if(!st.empty() and temperatures[i] <= temperatures[st.top()]){
                ans[i] = abs(st.top() - i);
            }st.push(i);
        }
        
        return ans;
    }
};
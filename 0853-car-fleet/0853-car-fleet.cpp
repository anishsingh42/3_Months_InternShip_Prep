class Solution {
public:
    int carFleet(int t, vector<int>& p, vector<int>& s) {
        vector<pair<int,int>> pos_time;
        for(int i=0;i<p.size();i++){
            pos_time.push_back({p[i],s[i]});
        }
        sort(pos_time.begin(),pos_time.end());
        stack <double> st;
        for(int i=p.size()-1;i>=0;i--){
            double tmp = (t - pos_time[i].first)/((double)pos_time[i].second);
            if(st.empty() || st.top() < tmp)
                st.push(tmp);
        }
        return st.size();
    }
};
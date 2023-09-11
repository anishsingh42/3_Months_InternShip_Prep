class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& gz) {
        vector<vector<int>> res;
        unordered_map<int, vector<int>> dict; //key : vector
        for(int i=0;i<gz.size();i++){
            dict[gz[i]].push_back(i);
            //if the group is full insert it to the res
            if(dict[gz[i]].size() == gz[i]){
                res.push_back(dict[gz[i]]);
                dict[gz[i]].clear();
            }
        }
        return res;
    }
};
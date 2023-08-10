class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if(numRows == 1){
            vector<vector<int>> res;
            res.push_back({1});
            return res;
        }
        vector<vector<int>> res;
        res.push_back({1});
        res.push_back({1,1});
        
        for(int i=1;i<numRows-1;i++){
            vector<int> tmp;
            tmp.push_back(1);
            for(int j=0;j<res[i].size()-1;j++){
                if(j+1 != res[i].size()){
                    tmp.push_back(res[i][j] + res[i][j+1]);
                }
            }
            tmp.push_back(1);
            res.push_back(tmp);
        }
        
        return res;
        
    }
};
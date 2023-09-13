class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        vector<int> sum(n, 1);

        //traverse left -> right to make sure every left element is follows the 2 rule
        for(int i = 1; i < n; i++){
            if(ratings[i] > ratings[i-1]){
                sum[i] = sum[i-1] + 1;
            }
        }        
        
        //traverse right->left to make sure every right element follows the 2 rule
        for(int i = n-2; i >= 0; i--){
            if(ratings[i] > ratings[i+1] and sum[i] <= sum[i+1]){
                sum[i] = sum[i+1] + 1;
            }
        }
        //summation of the sum vector
        int res = 0;
        for(int it : sum){
            res += it;
        }
        
        return res;
    }
};
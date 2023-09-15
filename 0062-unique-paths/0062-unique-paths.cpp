class Solution {
public:
    int uniquePaths(int m, int n) {
        //mathematics 
        // permuation formula
        int right = n-1;
        int down = m-1;
        long long ans = 1;
        for(int i = right + down, j = 1; j <= min(right, down); i--, j++){
            ans = (ans*i) / j;
        }
        
        return (int) ans;
        
    }
};
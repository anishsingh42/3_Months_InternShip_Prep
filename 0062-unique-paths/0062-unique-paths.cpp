class Solution {
public:
    
    
    int uniquePaths(int m, int n) {
        int right = n-1;
        int down = m-1;
        
        long long ans = 1;
        
        for(int i=right+down, j=1; i> max(right, down); i--,j++){
            cout << i << " " << j << endl;
            ans = (ans * i)/j;
        }
        
        return ans;
    }
};
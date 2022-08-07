class Solution {
public:
    bool isSubset(vector<int> &arr, int n, int sum, int **dp){
        //top-down approach
        //iterative
         
        
        //intitialization 
        for(int i=0;i<=n;i++){
            for(int j=0;j<=sum;j++){
                if(i==0) dp[i][j] = 0;
                if(j==0) dp[i][j] = 1;
            }
        }
        
        //choice and optimize
        for(int i=1;i<=n;i++){
            for(int j=1;j<=sum;j++){
                if(arr[i-1] <= j){
                    dp[i][j] = (dp[i-1][j-arr[i-1]] || dp[i-1][j]); 
                }else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        
        return dp[n][sum];
    }
    bool canPartition(vector<int>& arr) {
        
        int n = arr.size();
        long long int sum = 0;
        for(int i=0;i<arr.size();i++){
            sum += arr[i];
        }
        
        
        int ** dp = new int*[n+1];
        for(int i=0;i<=n;i++){
            dp[i] = new int[sum+1];
            for(int j=0;j<=sum;j++){
                dp[i][j] = -1;
            }
        }
        
        //if even return whether true or false 
        if(!(sum & 1)){
            return isSubset(arr,arr.size(),sum/2, dp);
        } // if odd return false
        else{
            return false;
        }
    }
};
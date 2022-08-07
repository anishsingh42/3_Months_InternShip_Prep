class Solution {
public:
    bool isSubset(vector<int> &arr, int n, int sum, int **dp){
        //memoization
        
        
        if(sum==0) return 1;
        if(n==0) return 0;
        if(dp[n][sum] != -1) return dp[n][sum];
        
        if(arr[n-1] <= sum){
            return dp[n][sum] = (isSubset(arr, n-1, sum-arr[n-1], dp) || isSubset(arr,n-1,sum, dp)); 
        }else{
            return dp[n][sum] = isSubset(arr,n-1,sum, dp);
        }
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
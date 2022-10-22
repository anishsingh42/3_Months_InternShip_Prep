//{ Driver Code Starts

#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
		int firstOcc(int a[], int n, int target){
        int fo = -1;
        int l = 0;
        int h = n-1;
        int m;
        while(l<=h){
            m = l + (h-l)/2;
            if(a[m] == target){
                fo = m;
                h = m-1;
            }
            else if(a[m] < target){
                l = m+1;
            }
            else{
                h = m-1;
            }
        }
        
        return fo;
    }
    
    int lastOcc(int a[], int n, int target){
        int lo = -1;
        int l = 0;
        int h = n-1;
        int m;
        while(l<=h){
            m = l + (h-l)/2;
            if(a[m] == target){
                lo = m;
                l = m+1;
            }
            else if(a[m] < target){
                l = m+1;
            }
            else{
                h = m-1;
            }
        }
        
        return lo;
    }
	int count(int arr[], int n, int x) {
	    // code here
	    int first = firstOcc(arr, n , x);
	    int last = lastOcc(arr, n , x);
	    


	   if(first == -1)
	        return 0;
	   return last - first +1;
	    
	}   
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
class Solution {
public:
    vector<vector<int>> permute(vector<int>& arr) {
        //solve this problem in a recursive fashion 
        //get the size of the array
        int n = arr.size() - 1; // get the last element of the array
        vector<vector<int>> res;
        get_permutation(res, arr, 0, n);
        return res;
    }
    
    void get_permutation(vector<vector<int>> &res, vector<int> &arr, int index, int n){
        if(index == n){
            res.push_back(arr);
            return;
        }
        
        //if not the base case ... perform the permutation 
        for(int i = index; i <= n; i++){
            //swap the value to make a new permutation
            swap(arr[index], arr[i]);
            //recursive call the next index
            get_permutation(res, arr, index+1, n);
            //backtrack to the previous known array
            swap(arr[index], arr[i]);
        }
        
        return;
    }
};
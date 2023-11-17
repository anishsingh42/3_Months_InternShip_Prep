class Solution {
public:
    int findMin(vector<int>& arr) {
        int start = 0;
        int high = arr.size()-1;
        int mid;
        while(start < high){
            if(arr[start] < arr[high]) // sorted order ascending order 
                return arr[start];
            else{ // rotated
                mid = start + (high-start)/2;
                if(arr[mid] >= arr[start]) start = mid+1; // answer will be on the right side of mid
                else high = mid; // answer on the left side of the mid
            }
        }
        return arr[start];
    }
};
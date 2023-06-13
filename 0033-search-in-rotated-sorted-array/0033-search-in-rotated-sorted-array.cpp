class Solution {
public:
    int search(vector<int>& arr, int target) {
        int low = 0;
        int high =  arr.size()-1;
        int mid;
        while(low<=high){
            mid = low + (high-low)/2;
            if(arr[mid] == target) return mid;
            
            //search left if sorted
            if(arr[low] <= arr[mid]){
                if(arr[low] <= target and arr[mid] >= target) high=mid-1;
                else low = mid+1;
            }else{
                if(arr[high] >= target and arr[mid] <= target) low = mid+1;
                else high = mid-1;
            }
            
        }
        return -1;
    }
};
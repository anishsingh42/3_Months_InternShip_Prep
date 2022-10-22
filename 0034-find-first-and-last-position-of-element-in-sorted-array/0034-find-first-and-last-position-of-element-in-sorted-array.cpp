class Solution {
public:
    int firstOcc(vector<int>&a, int target){
        int fo = -1;
        int l = 0;
        int h = a.size()-1;
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
    
    int lastOcc(vector<int>&a, int target){
        int lo = -1;
        int l = 0;
        int h = a.size()-1;
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
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = firstOcc(nums,target);
        int last = lastOcc(nums,target);
        vector<int> ans;
        ans.push_back(first);
        ans.push_back(last);
        return ans;
    }
};
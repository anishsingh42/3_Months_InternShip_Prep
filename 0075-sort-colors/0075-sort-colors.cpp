class Solution {
public:
    void sortColors(vector<int>& nums) {
        //simple concet 
        /*
        * 3 colors and 3 different variables 
        * low dnotes the number 0
        * mid denotes the number 1 
        * high denotes the number 2
        **/
        
        int low = 0;
        int mid = 0;
        int high = nums.size()-1;
        
        while(mid <= high){
            switch(nums[mid]){
                case 0 : swap(nums[low], nums[mid]); low++; mid++; break;
                case 1 : mid++; break;
                case 2 : swap(nums[high], nums[mid]); high--; break;
                
            }
        }
        
        return;
    }
};
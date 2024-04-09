class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int unique_index = 1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i] != nums[i-1]){
                nums[unique_index] = nums[i];
                unique_index++;
            }
        }
        
        return unique_index;
    }
};
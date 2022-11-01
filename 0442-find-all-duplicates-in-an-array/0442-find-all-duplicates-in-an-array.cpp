class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> dups;
        
        for(int i=0;i<nums.size();i++){
            //scan the element 
            int indexofelem = abs(nums[i]) - 1;
            
            //negate the indexofelem
            nums[indexofelem] = - nums[indexofelem];
            
            //check whether greater than zero or not 
            //yes == duplicate 
            // no == not duplicate 
            if(nums[indexofelem] > 0)
                dups.push_back(indexofelem + 1);
        }
        
        
        return dups;
    }
};
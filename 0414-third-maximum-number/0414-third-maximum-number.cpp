class Solution {
public:
    int thirdMax(vector<int>& nums) {
        if(nums.size() < 3)
            return *max_element(nums.begin(), nums.end());
        
        long first_max = LONG_MIN;
        long second_max = LONG_MIN;
        long third_max = LONG_MIN;
        
        for(int num : nums){
            
            
            if(num == first_max || num == second_max || num == third_max)
                continue;
            
            if(first_max == LONG_MIN || first_max < num){
                third_max = second_max;
                second_max = first_max;
                first_max = num;
            }
            
            else if(second_max == LONG_MIN || second_max < num){
                third_max = second_max;
                second_max = num;
            }
            
            else if(third_max == LONG_MIN || third_max < num){
                third_max = num;
            }
            
        }
        
        if(third_max == LONG_MIN)
            return first_max;
        else 
            return third_max;
        
    }
};
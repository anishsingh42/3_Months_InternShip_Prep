class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.empty()) return 0;
        int best = INT_MIN;
        int maxprod = 1;
        int minprod = 1;
        for(int a:nums){
            if(a<0)
                swap(maxprod,minprod);
            
            maxprod = max(maxprod*a, a);
            minprod = min(minprod*a, a);
            
            best = max(best, maxprod);
        }
        
        
        return best;
    }
};
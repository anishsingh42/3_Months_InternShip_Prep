class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long mul = 1;
        long zero = 0;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 0){
                cnt++;
                continue;
            }
            else
                mul *= nums[i];
        }
        // cout << mul;
        vector<int> ans(nums.size(), 0);
        if(cnt==0){
            for(int i=0;i<nums.size();i++){
                ans[i] = (mul/nums[i]);
            }            
        }
        else if(cnt==1){
            for(int i=0;i<nums.size();i++){
                if(nums[i] !=  0){
                    continue;
                }
                else
                {
                    ans[i] = mul;
                }
            }
        }
        
        return ans;
    }
};
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int n = nums.size();
        int cnt = 1;
        int ans = 1;
        sort(nums.begin(), nums.end());
        
        for(int i=1;i<n;i++){
            if(nums[i] == nums[i-1])
                continue;
            else if(nums[i] == nums[i-1] + 1)cnt++;
            else{
                ans = max(ans, cnt);
                cnt = 1;
            }
        }
        
        return max(ans,cnt);
    }
};



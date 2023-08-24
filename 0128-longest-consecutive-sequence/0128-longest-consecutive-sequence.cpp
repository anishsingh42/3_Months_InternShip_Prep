class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int n = nums.size();
        unordered_map<int, int> mp;
        int ans = 1;
        
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int cnt = 0;
        
        for(auto mp_pair : mp){
            if(mp.find(mp_pair.first - 1) == mp.end()){
                int curr_num = mp_pair.first;
                cnt = 1;
                while(mp.find(curr_num+1) != mp.end()){
                    curr_num++;
                    cnt++;
                }
                
                ans = max(cnt,ans);
            }
        }
        
        return max(ans, cnt);
        
    }
};
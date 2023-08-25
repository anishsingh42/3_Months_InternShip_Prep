class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res = 0;
        int cnt = 0;
        for(int i: nums){
            if(i == 1) cnt++;
            else{
                res = max(res, cnt);
                cnt = 0;
            }
        }
        
        return max(res, cnt);
    }
};
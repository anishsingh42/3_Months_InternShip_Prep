class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Moore Voting Algorithm
        
        int cnt = 0;
        int ele = 0;
        
        for(auto n : nums){
            if(cnt == 0) ele = n;
            if(ele == n) cnt++;
            else cnt--;
        }
        
        return ele;
    }
};
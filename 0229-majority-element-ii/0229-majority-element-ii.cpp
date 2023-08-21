class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1 = 0;
        int ele1 = INT_MIN;
        int cnt2 = 0;
        int ele2 = INT_MIN;
        
        for(int i=0;i<nums.size();i++){
            if(cnt1 == 0 and ele2 != nums[i]){
                cnt1++;
                ele1 = nums[i];
            }
            else if(cnt2 == 0 and ele1 != nums[i]){
                cnt2++;
                ele2 = nums[i];
            }
            
            else if(ele1 == nums[i]) cnt1++;
            else if(ele2 == nums[i]) cnt2++;
            
            else{
                cnt1--;
                cnt2--;
            }
        }
        
        vector<int> ans;
        
        cnt1 = 0;
        cnt2 = 0;
        for(int i=0;i<nums.size();i++){
            if(ele1 == nums[i])cnt1++;
            if(ele2 == nums[i])cnt2++;
        }
        int mini = (int)floor(nums.size()/3)+1;
        if(cnt1 >= mini) ans.push_back(ele1);
        if(cnt2 >= mini) ans.push_back(ele2);
        
        sort(ans.begin(), ans.end());
        
        return ans;
    }
};
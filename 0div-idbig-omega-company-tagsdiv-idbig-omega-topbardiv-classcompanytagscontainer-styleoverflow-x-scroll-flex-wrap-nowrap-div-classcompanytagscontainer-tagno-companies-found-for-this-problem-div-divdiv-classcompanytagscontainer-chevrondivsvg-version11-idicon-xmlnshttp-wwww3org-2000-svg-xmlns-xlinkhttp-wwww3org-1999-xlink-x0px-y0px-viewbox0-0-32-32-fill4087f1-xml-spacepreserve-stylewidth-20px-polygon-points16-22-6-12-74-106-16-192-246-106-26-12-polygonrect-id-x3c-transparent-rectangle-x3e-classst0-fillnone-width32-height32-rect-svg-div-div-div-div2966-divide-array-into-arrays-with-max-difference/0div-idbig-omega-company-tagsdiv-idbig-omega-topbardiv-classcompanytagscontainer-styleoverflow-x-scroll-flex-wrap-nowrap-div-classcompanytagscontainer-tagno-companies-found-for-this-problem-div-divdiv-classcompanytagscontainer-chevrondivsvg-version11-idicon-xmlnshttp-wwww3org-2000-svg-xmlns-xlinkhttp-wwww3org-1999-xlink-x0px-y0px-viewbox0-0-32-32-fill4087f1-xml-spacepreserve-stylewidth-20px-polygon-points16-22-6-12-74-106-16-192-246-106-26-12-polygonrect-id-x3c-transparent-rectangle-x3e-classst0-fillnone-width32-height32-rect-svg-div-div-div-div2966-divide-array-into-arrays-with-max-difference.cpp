class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        int n = nums.size();
        
        vector<vector<int>> result(n/3, vector<int>(3));
        
        int answerIndex = 0;
        sort(nums.begin(), nums.end());
        
        for(int i=0; i<n; i+=3){
            if(i+2 < n and nums[i+2] - nums[i] <= k){
                result[answerIndex] = {nums[i], nums[i+1], nums[i+2]};
                answerIndex++;
            }else{
                return vector<vector<int>>();
            }
        }
        
        return result;
    }
};
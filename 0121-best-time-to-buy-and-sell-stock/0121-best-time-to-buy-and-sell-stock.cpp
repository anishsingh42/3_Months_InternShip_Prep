class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minBuyingPrice = INT_MAX;
        int max_profit = 0;
        
        for(int it : prices){
            minBuyingPrice = min(minBuyingPrice, it);
            max_profit = max(max_profit, it - minBuyingPrice);
        }
        
        return max_profit;
        
    }
};
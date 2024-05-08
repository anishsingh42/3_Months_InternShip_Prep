class Solution {
public:
    int maxProfit(vector<int>& prices) {
        /* 
        * decreasing (descending) ===> maxprofit = 0 [buying and selling stocks-1]
        * increasing (ascending) ===> maxprofit = max(maxP, prices[i] - minPrice) [buying and selling stocks-1]
        * combined (hetero-geneous) ===> let start = price[0]. for(i=1;i<len;i++)
        
        */
        
        int minPrice = prices[0];
        int max_Profit = 0;

        for(int i=1; i<prices.size(); i++){
            if(minPrice <= prices[i])
                max_Profit += prices[i] - minPrice;
            
            minPrice = prices[i];
        }
        
        return max_Profit;
        
        
    }
};
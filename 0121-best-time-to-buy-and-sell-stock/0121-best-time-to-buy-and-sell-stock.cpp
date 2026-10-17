class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0;
        int min_price = prices[0];

        for(int i = 1; i < n;i++){
            int current_profit = prices[i] - min_price;
            if(current_profit>profit){
                profit = current_profit;
            }
            min_price = min(min_price,prices[i]);
        }
        return profit;
    }
};
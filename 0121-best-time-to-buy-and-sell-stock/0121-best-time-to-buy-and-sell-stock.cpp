class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int bestBuy = prices[0];

        for (int price : prices) {
            int currProfit = 0;
            if (price < bestBuy) {
                bestBuy = price;
            } else if (price > bestBuy) {
                currProfit = price - bestBuy;
                profit = max(profit, currProfit);
            }
        } 
        return profit;
    }
};
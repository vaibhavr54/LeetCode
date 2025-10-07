class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mp = 0, bestBuy = prices[0], n = prices.size();
        for (int i=1; i<n; i++) {
            if (prices[i] > bestBuy) {
                mp = max(mp, prices[i]-bestBuy);
            }
            bestBuy = min(prices[i], bestBuy);
        }
        return mp;
    }
};
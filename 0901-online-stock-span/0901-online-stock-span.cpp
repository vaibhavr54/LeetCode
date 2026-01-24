class StockSpanner {
public:
    stack <int> s;
    vector <int> prices;

    StockSpanner() {

    }
    
    int next(int price) {
        prices.push_back(price);
        int i = prices.size() - 1;

        while (!s.empty() && prices[s.top()] <= prices[i]) {
            s.pop();
        }

        int span = 0;
        if (s.empty()) {
            span = i+1;
        } else {
            span = i - s.top();
        }
        s.push(i);
        return span;
    }
};
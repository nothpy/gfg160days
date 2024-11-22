    int maximumProfit(vector<int> &prices) 
    {
        int profit = 0;
        int stockBuy = INT_MAX;

        for (int i = 0; i < prices.size(); i++) 
        {
          if (prices[i] < stockBuy)
          {
            stockBuy = prices[i];
          }
          profit = max(profit, prices[i] - stockBuy);
        }
        return profit;
    }
// Problem -> https://www.codingninjas.com/codestudio/problems/best-time-to-buy-and-sell-stock_8230746?challengeSlug=striver-sde-challenge

// Optimal(Kadane's Algorithm)
// TC -> O(n) & O(1)

int maximumProfit(vector<int> &prices){
    
    int maxProfit = 0;
    int minPrice = prices[0];
    for (int i = 1, n = prices.size(); i < n; i++) {
        int currPrice = prices[i];
        int currProfit = currPrice - minPrice;
        if (currPrice < minPrice) {
            minPrice = currPrice;
        }
        maxProfit = max(maxProfit, currProfit);
    }

    return maxProfit;
}
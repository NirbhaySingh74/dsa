#include <iostream>
#include <vector>
using namespace std;

// brute force approach taking o(n^2) Time
int brute_buy_sell_stock(vector<int> &prices)
{
    int n = prices.size(), maxProfit = 0;
    for (int i = 0; i < n - 1; i++)
    {

        for (int j = i + 1; j < n; j++)
        {
            maxProfit = max(maxProfit, prices[j] - prices[i]);
        }
    }
    return maxProfit;
}

// optimal appraoch taking o(n) time
int optimal_BuyAndSell_Stocks(vector<int> &prices)
{
    int maxProfit = 0, mini = prices[0];
    for (int i = 1; i < prices.size(); i++)
    {
        int cost = prices[i] - mini;
        maxProfit = max(maxProfit, cost);
        mini = min(mini, prices[i]);
    }
    return maxProfit;
}
int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    // cout << brute_buy_sell_stock(prices);
    cout << optimal_BuyAndSell_Stocks(prices);
    return 0;
}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// brute force approach taking o(n^2) Time
int brute_buy_sell_stock(vector<int> &prices)
{
    int maxProfit = 0;
    int n = prices.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            maxProfit = max(maxProfit, (prices[j] - prices[i]));
        }
    }
    return maxProfit;
}

// optimal appraoch taking o(n) time
int optimal_BuyAndSell_Stocks(vector<int> &prices)
{
    int maxProfit = INT_MIN, minimum = prices[0];
    for (int i = 0; i < prices.size(); i++)
    {
        if (prices[i] < minimum)
        {
            minimum = prices[i];
        }

        maxProfit = max(maxProfit, (prices[i] - minimum));
    }
    return maxProfit;
}
int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << brute_buy_sell_stock(prices)<<endl;
    cout << optimal_BuyAndSell_Stocks(prices);
    return 0;
}
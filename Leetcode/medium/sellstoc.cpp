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
int main()
{
    vector<int> prices = {7, 6, 4, 3, 1};
    cout << brute_buy_sell_stock(prices);
    return 0;
}
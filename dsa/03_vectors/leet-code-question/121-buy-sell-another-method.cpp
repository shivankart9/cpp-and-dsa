// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
//Return the maximum profit you can achieve from this transaction.
// leet code 121 - best-time-to-buy-and-sell-stock
//same optimised
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxprofit(vector<int>& prices) {
    int bestbuy = prices[0];
    int maxprofit = 0;

    for(int i = 0; i < prices.size(); i++) {
        if(prices[i] > bestbuy) {
            maxprofit = max(maxprofit,prices[i] - bestbuy);
        }
        bestbuy = min(bestbuy,prices[i]);
    }
    return maxprofit;
}

int main() {
    vector<int> prices = {7,1,5,3,6,4};

    cout << "the highest profit is : " << maxprofit(prices) <<endl;

    return 0;
}
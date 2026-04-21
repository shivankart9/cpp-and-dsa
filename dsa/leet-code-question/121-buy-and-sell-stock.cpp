// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
//Return the maximum profit you can achieve from this transaction.
// leet code 121 - best-time-to-buy-and-sell-stock
#include<iostream>
#include<vector>
#include<algorithm> // used for using min and max
#include<climits> // for INT_MAX
using namespace std;

int maxprofit(vector<int>& prices) {
    int minprice = INT_MAX; // here set the min price the maximum
    int maxprofit = 0 ; // here we set the max price zero
    for(int price: prices) {
        minprice = min(minprice,price); // here we compare between minprice (which is max already) and price(whole array element) it will obiously return something from array and store the actual min price

        maxprofit= max(maxprofit,price-minprice); // here we compare between max profit (we already declared it zero ) and price -minprice so it will store the profit in max price and if there is any loss so it will store zero

    }
    return maxprofit;
}

int main() {
    vector<int> prices = {7,1,5,3,6,4};

    cout << "the highest profit is : " << maxprofit(prices) <<endl;

    return 0;
}
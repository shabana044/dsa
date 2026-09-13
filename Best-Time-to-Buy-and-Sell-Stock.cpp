#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i;
        int minPrice = prices[0];
        int maxProfit = 0;

        for (i = 0; i < prices.size(); i++) {

            if (prices[i] < minPrice) {
                minPrice = prices[i];
            }

            int profit = prices[i] - minPrice;

            if (profit > maxProfit) {
                maxProfit = profit;
            }
        }

        return maxProfit;
    }
};

int main() {

    Solution solution;

    vector<int> prices = {7, 1, 5, 3, 6, 4};

    int answer = solution.maxProfit(prices);

    cout << "Maximum Profit: " << answer << endl;

    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)
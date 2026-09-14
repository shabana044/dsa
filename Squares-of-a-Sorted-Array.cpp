#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
    vector<int> result;

    for(int i = 0; i < nums.size(); i++) {
        result.push_back(nums[i] * nums[i]);
    }

    sort(result.begin(), result.end());

    return result;
}

int main() {
    vector<int> nums = {-4, -1, 0, 3, 10};

    vector<int> result = sortedSquares(nums);

    cout << "Squared sorted array: ";

    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    cout << endl;

    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int pos = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != val) {
                nums[pos] = nums[i];
                pos++;
            }
        }

        return pos;
    }
};

int main() {
    vector<int> nums = {3, 2, 2, 3};
    int val = 3;

    Solution solution;

    int k = solution.removeElement(nums, val);

    cout << "k = " << k << endl;

    cout << "Remaining elements: ";
    for(int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }

    cout << endl;

    return 0;
}
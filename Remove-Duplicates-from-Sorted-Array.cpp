#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int pos = 1;

    for(int i = 1; i < nums.size(); i++) {
        if(nums[i] != nums[pos - 1]) {
            nums[pos] = nums[i];
            pos++;
        }
    }

    return pos;
}

int main() {
    vector<int> nums = {1, 1, 2, 2, 3};

    int k = removeDuplicates(nums);

    cout << "k = " << k << endl;

    cout << "Unique elements: ";
    for(int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }

    cout << endl;

    return 0;
}
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool containsDuplicate(vector<int>& nums)
{
    unordered_set<int> seen;

    for (int i = 0; i < nums.size(); i++)
    {
        if (seen.count(nums[i]))
        {
            return true;
        }

        seen.insert(nums[i]);
    }

    return false;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4};

    if (containsDuplicate(nums))
    {
        cout << "Duplicate found" << endl;
    }
    else
    {
        cout << "No duplicate" << endl;
    }

    return 0;
}
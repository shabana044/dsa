#include <iostream>
#include <string>
#include <unordered_set>
#include <algorithm>
using namespace std;

int lengthOfLongestSubstring(string s) {
    int left = 0;
    int right = 0;
    int maxlength = 0;

    unordered_set<char> seen;

    while (right < s.length()) {
        if (seen.count(s[right]) == 0) {
            seen.insert(s[right]);
            maxlength = max(maxlength, right - left + 1);
            right++;
        }
        else {
            seen.erase(s[left]);
            left++;
        }
    }

    return maxlength;
}

int main() {
    string s;

    cout << "Enter a string: ";
    getline(cin, s);

    cout << "Longest length = "
         << lengthOfLongestSubstring(s) << endl;

    return 0;
}
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

bool isAnagram(string s, string t) {
    unordered_map<char, int> freq;

    for (int i = 0; i < s.length(); i++) {
        freq[s[i]]++;
    }

    for (int i = 0; i < t.length(); i++) {
        freq[t[i]]--;
    }

    for (auto x : freq) {
        if (x.second != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    string s = "anagram";
    string t = "nagaram";

    cout << boolalpha << isAnagram(s, t) << endl;

    return 0;
}
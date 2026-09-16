#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isPalindrome(string s) {
    int left = 0;
    int right = s.length() - 1;

    while (left < right) {

        while (left < right && !isalnum(s[left])) {
            left++;
        }

        while (left < right && !isalnum(s[right])) {
            right--;
        }

        if (tolower(s[left]) != tolower(s[right])) {
            return false;
        }

        right--;
        left++;
    }

    return true;
}

int main() {
    string s;

    cout << "Enter a string: ";
    getline(cin, s);

    cout << (isPalindrome(s) ? "Palindrome" : "Not Palindrome") << endl;

    return 0;
}
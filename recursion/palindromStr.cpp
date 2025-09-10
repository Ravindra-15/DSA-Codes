#include <iostream>
using namespace std;

// Function to check if a string is a palindrome
bool isPalindrome(string& str, int start, int end) {
    if (start >= end) {
        return true;
    }
    //If characters at start and end don't match, it's not a palindrome
    if (str[start] != str[end]) {
        return false;
    }

    // Recursive call with narrowed indices
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    string str;
    cout << "Enter a string to check if it's a palindrome: ";
    //cin >> str;
    getline(cin, str);

    int start = 0;
    int end = str.size() - 1;
    bool isValidPalindrome = isPalindrome(str, start, end);

    // Display result with message
    if (isValidPalindrome) {
        cout << "The string is a valid palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}

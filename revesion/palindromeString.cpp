#include <bits/stdc++.h>

using namespace std;
bool checkPalindrome(string &str)
{
    int start = 0;
    int end = str.length() - 1;

    while (start <= end)
    {
        if (str[start] != str[end])
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int main()
{
    string str;
    cout << "Enter a String: ";
    getline(cin, str);
    if (checkPalindrome(str))
    {
        cout << "The string is a palindrome." << endl;
    }
    else
    {
        cout << "The string is not a palindrome." << endl;
    }
    return 0;
}
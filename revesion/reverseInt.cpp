#include <bits/stdc++.h>
using namespace std;

int reverseInteger(int x) {
    int ans = 0;
    bool isNeg = false;

    if (x == INT_MIN) {  // handle special case
        return 0;
    }

    if (x < 0) {
        isNeg = true;
        x = -x;
    }

    while (x > 0) {
        if (ans > INT_MAX / 10) { // check for overflow
            return 0;
        }
        int digit = x % 10;
        ans = ans * 10 + digit;
        x /= 10;
    }

    return isNeg ? -ans : ans;
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    int reversed = reverseInteger(num);
    cout << "Reversed number: " << reversed << endl;

    return 0;
}

// Time Complexity: O(n) — one recursive call per number down to 1
// Space Complexity: O(n) — due to recursion stack (function calls)

// Factorial using recursion
#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
    if (n == 1) {
        return 1;
    }

    int ans = n * factorial(n - 1);
    return ans;
}

int main() {
    int num;
    cout << "Enter a number: " << endl;
    cin >> num;

    int ans = factorial(num);
    cout << "Factorial is: " << ans << endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

// Recursive function to generate all valid parentheses combinations
void solve(vector<string> &ans, int n, int used_open, int used_close, int rem_open, int rem_close, string output)
{
    // Base case: if no more parentheses to place
    if (rem_open == 0 && rem_close == 0)
    {
        ans.push_back(output);
        return;
    }

    // Add an open bracket if available
    if (rem_open > 0)
    {
        output.push_back('('); // choose
        solve(ans, n, used_open + 1, used_close, rem_open - 1, rem_close, output); // explore
        output.pop_back(); // un-choose (backtrack)
        
        // solve(ans, n, used_open + 1, used_close, rem_open - 1, rem_close, output+'('); // explore
     
    }

    // Add a close bracket only if it maintains validity
    if (used_open > used_close)
    {
        output.push_back(')');
        solve(ans, n, used_open, used_close + 1, rem_open, rem_close - 1, output);
        output.pop_back(); // backtrack
    }
}

int main()
{
    int n;
    cout << "Enter number of pairs of parentheses: ";
    cin >> n;

    vector<string> ans;     // Stores all valid combinations
    int used_open = 0;      // Number of open brackets used so far
    int used_close = 0;     // Number of close brackets used so far
    int rem_open = n;       // Remaining open brackets to be used
    int rem_close = n;      // Remaining close brackets to be used
    string output = "";     // Current string being built

    solve(ans, n, used_open, used_close, rem_open, rem_close, output);

    // Print all valid combinations
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }

    return 0;
}


#include <iostream>
using namespace std;

/*
🎨 Problem: Painter's Partition Problem (GFG)

You are given:
- `arr[]`: an array where each element represents the time to paint a board of length `arr[i]`.
- `k`: the number of painters.
- `n`: the number of boards.

🔹 Objective:
Allocate boards to painters such that:
1. Each painter paints only continuous boards.
2. Every board is painted by only one painter.
3. The **maximum time** taken by any painter is **minimized**.

🧠 Strategy:
- Use Binary Search on the range [max(arr), sum(arr)]
- Use a greedy approach to check if `mid` (time limit) is feasible

🔁 Time Complexity:
- Binary Search range: O(log(sum(arr)))
- For each mid: O(n)
⇒ Total: O(n * log(sum(arr)))

📦 Space Complexity: O(1)
*/

// ✅ Greedy check if `mid` can be the maximum time any painter takes
bool isPossibleSolution(int a[], int n, int k, long long mid) {
    long long timeSum = 0;
    int c = 1;  // number of painters needed

    for (int i = 0; i < n; i++) {
        if (a[i] > mid) return false;  // single board exceeds allowed time

        if (a[i] + timeSum > mid) {
            c++;                    // need a new painter
            timeSum = a[i];         // reset time for new painter
            if (c > k) return false;  // too many painters
        } else {
            timeSum += a[i];  // continue assigning to current painter
        }
    }

    return true;
}

// ✅ Main function to compute the minimum time
long long minTime(int arr[], int n, int k) {
    long long start = 0;
    long long end = 0;

    // Calculate total painting time (sum of all boards)
    for (int i = 0; i < n; i++) {
        end += arr[i];
    }

    long long ans = -1;

    // Binary Search on the answer
    while (start <= end) {
        long long mid = start + (end - start) / 2;

        if (isPossibleSolution(arr, n, k, mid)) {
            ans = mid;      // possible, try smaller
            end = mid - 1;
        } else {
            start = mid + 1; // too small, try larger
        }
    }

    return ans;
}

int main() {
    // Example input
    int arr[] = {10, 20, 30, 40};  // time for each board
    int n = sizeof(arr) / sizeof(arr[0]);  // number of boards
    int k = 2;  // number of painters

    cout << "Minimum time to paint all boards: " << minTime(arr, n, k) << endl;

    return 0;
}

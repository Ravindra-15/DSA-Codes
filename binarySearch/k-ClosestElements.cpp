#include <iostream>
#include <vector>
#include <cmath> // For abs()

using namespace std;

/*
    LeetCode 658: Find K Closest Elements
    -------------------------------------
    Given a sorted integer array `arr`, two integers `k` and `x`,
    return the `k` closest integers to `x` in the array.

    The result should also be sorted in ascending order.

    An integer `a` is closer to `x` than an integer `b` if:
        |a - x| < |b - x|, OR
        |a - x| == |b - x| and a < b

    Example:
    --------
    Input: arr = [1,2,3,4,5], k = 4, x = 3
    Output: [1,2,3,4]

    Approach: Two Pointer (Sliding Window)
    // binary approach would be best
    --------------------------------------
    - Start with two pointers: left = 0, right = arr.size() - 1
    - While the window size is larger than k:
        - Remove the farthest element from x (either from left or right)
    - Return the subarray of size k
    time complexity = O(n - k) where n is the size of the array, because in the worst case, we remove n - k elements
*/

vector<int> findClosestElements(vector<int>& arr, int k, int x) {
    int left = 0;
    int right = arr.size() - 1;

    // Shrink the window until it becomes size k
    while (right - left >= k) {
        if (abs(arr[left] - x) > abs(arr[right] - x)) {
            left++;  // Remove left element
        } else {
            right--; // Remove right element
        }
    }

    // Create the result from the valid window
    vector<int> result(arr.begin() + left, arr.begin() + right + 1);
    return result;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 4;
    int x = 3;

    vector<int> result = findClosestElements(arr, k, x);

    cout << "Output: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

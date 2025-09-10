#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int>& nums) {
    int low = 1, high = nums.size() - 1, duplicate = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Count numbers <= mid
        int count = 0;
        for (int num : nums) {
            if (num <= mid) count++;
        }

        if (count > mid) {
            duplicate = mid; // potential answer
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return duplicate;
}

int main() {
    vector<int> nums = {1, 3, 4, 2, 2};
    cout << "Duplicate number: " << findDuplicate(nums) << endl;
    return 0;
}

#include <iostream>
using namespace std;

int findMissingElement(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        // Expected value at mid is mid + 1
        if (arr[mid] - mid == 1) {
            // No missing on the left side
            start = mid + 1;
        } else {
            // Missing element is on the left side
            end = mid - 1;
        }
    }

    // At the end of loop, start points to the missing number's position
    return start + 1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    int missing = findMissingElement(arr, size);
    cout << "Missing element is: " << missing << endl;

    return 0;
}

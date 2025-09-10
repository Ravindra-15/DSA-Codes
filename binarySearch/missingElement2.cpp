#include <iostream>
using namespace std;

int findMissing(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        // If arr[mid] == mid + 1, it means left side is perfect
        if (arr[mid] == mid + 1) {
            start = mid + 1;
        } else {
            // Pattern breaks here, missing element is on the left
            end = mid - 1;
        }
    }

    // The missing number is at index `start`, so answer = start + 1
    return start + 1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    int missing = findMissing(arr, size);
    cout << "Missing element is: " << missing << endl;

    return 0;
}

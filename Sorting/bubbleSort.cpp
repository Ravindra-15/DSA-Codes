// #include <bits/stdc++.h>

// using namespace std;

//// TC ---- (O(n2))

// int main() {
//     int n;
//     cout << "Enter the array size: ";
//     cin >> n;   // read size first

//     int arr[n];
//     cout << "Enter the array Elements: ";
//     for (int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
    
//     cout << "Unsorted array is: ";
//     for (int i = 0; i < n; i++){
//        cout << arr[i];
//     }

//     //bubble sort logic

//     for(int i = 0; i < n-1; i++){
//         for(int j = 0; j < n-i-1; j++){
//           if(arr[j] > arr[j+1]){
//             swap(arr[j], arr[j+1]);
//           }
//         }
//     }
//     cout << endl << "Sorted array is: ";
//     for (int i = 0; i < n; i++){
//        cout << arr[i];
//     }
//     return 0;
// }


//Optimized Version  TC (O(n2))

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the array size: ";
    cin >> n;

    int arr[n];
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "Unsorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        // if no swaps, array is already sorted
        if (!swapped) break;
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

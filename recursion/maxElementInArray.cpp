#include <bits/stdc++.h>

using namespace std;
void findMax(int arr[], int size, int i, int& max, int& min){
    if(i >= size){
      return;
    }

if(arr[i] > max){
    max = arr[i];
}
if(arr[i] < min){
    min = arr[i];
}

findMax(arr, size, i+1, max, min);

}
int main() {
    int arr[] = {10, 20, 30, 4, 55, 12, 45, 65, 85, 64};
    int size = sizeof(arr)/sizeof(arr[0]);  // no. of elements (length)
    int index = 0;
    int max = INT_MIN;
    int min = INT_MAX;
    
    findMax(arr, size, index, max, min);
    cout << "Max element is: " << max << endl;
    
    cout << "Min element is: " << min;

    return 0;
}
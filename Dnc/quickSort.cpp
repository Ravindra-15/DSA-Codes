#include <bits/stdc++.h>

using namespace std;
int partition(int *arr, int start, int end){
    int pivotIndex = start;
   
    int pivotElement = arr[start];
    int count = 0;
    for(int i = start+1; i <= end; i++){
       
        if(arr[i] <= pivotElement)
        count++;
    }
   
    int rightIndex = start + count;
     swap(arr[pivotIndex], arr[rightIndex]);
    pivotIndex = rightIndex;
    
    int i = start;
    int j = end;

    while(i < pivotIndex && j > pivotIndex){
        while(arr[i]<= pivotElement){
            i++;
        }
        while(arr[j]> pivotElement){
            j--;
        }

        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i], arr[j]);
        }
    }
 return pivotIndex;

}

void quickSort(int *arr, int start, int end){
    if(start >= end){
        return;
    }

    int p = partition(arr, start, end);
    quickSort(arr, start, p-1);
    quickSort(arr, p+1, end);
}

int main() {
    int arr[] = {5,6,6,6,6,6,6,6,6,4,80,9,2,36,4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int end = size-1;

    quickSort(arr, start, end);

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
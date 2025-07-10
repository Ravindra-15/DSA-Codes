#include <iostream>
using namespace std;
void merge(int* arr, int start, int end){
    int mid = start + (end - start) / 2;
    
    int len1 = mid - start + 1;
    int len2  = end - mid;

    int* left = new int[len1];
    int* right = new int[len2];

    //copying values
    int k = start;
    for(int i = 0; i < len1; i++){
        left[i] = arr[k];
        k++;
    }

    k = mid + 1;
    for(int i = 0; i < len2; i++){
        right[i] = arr[k];
        k++;
    }

    //merge logic
    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = start;

    while(leftIndex < len1 && rightIndex < len2){
        if(left[leftIndex] < right[rightIndex]){
            arr[mainArrayIndex] = left[leftIndex];
            mainArrayIndex++;
            leftIndex++;
        }
        else{
            arr[mainArrayIndex] = right[rightIndex];
            mainArrayIndex++;
            rightIndex++;
        }
    }

    //copy logic for left array
    while(leftIndex < len1){
        arr[mainArrayIndex++] = left[leftIndex++];
    }
    //copy logic for right array
    while(rightIndex < len2){
        arr[mainArrayIndex++] = right[rightIndex++];
    }
//TODO : we can delete newly created left and right arrays further
delete[] left;
delete[] right;

}
void mergeSort(int *arr, int start, int end)
{
    // base case
    //  s == e => single element
    // s > e => invalid array
    if (start >= end)
        return;

    int mid = start + (end - start) / 2;

    // sorting left part of array using recursion
    mergeSort(arr, start, mid);

    // sorting right part of array using recursion
    mergeSort(arr, mid + 1, end);

    //merging two sorted arrays
    merge(arr, start, end);

}
int main()
{
    int arr[] = {9, -1, -3, 7, 5, 3, 1, -5, 0, -2, -4};
    int n = 11;

    int start = 0;
    int end = n - 1;
    mergeSort(arr, start, end);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
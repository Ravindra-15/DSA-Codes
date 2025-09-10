#include <bits/stdc++.h>

using namespace std;
void merge(int* arr, int start, int end)
{
    int mid = start + (end - start) / 2;

    int len1 = mid - start + 1;
    int len2 = end - mid;

    int *left = new int[len1];
    int *right = new int[len2];

    // copy elements

    int k = start;

    for (int i = 0; i < len1; i++)
    {
        left[i] = arr[k];
        k++;
    }
    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        right[i] = arr[k];
        k++;
    }

    // merge logic

    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = start;

    while (leftIndex < len1 && rightIndex < len2)
    {
        if (left[leftIndex] < right[rightIndex])
        {
            arr[mainArrayIndex++] = left[leftIndex++];
        }
        else
        {
            arr[mainArrayIndex++] = right[rightIndex++];
        }
    }

    // copy remaining elements

    while (leftIndex < len1)
    {
        arr[mainArrayIndex++] = left[leftIndex++];
    }
    while (rightIndex < len2)
    {
        arr[mainArrayIndex++] = right[rightIndex++];
    }
}
void mergeSort(int *arr, int start, int end)
{
    int mid = start + (end - start) / 2;

    if (start >= end)
    {
        return;
    }

    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, start, end);
}

int main()
{
    int arr[] = {9, 8, 7, 6, -5, 4, 3, 2, 1};
    int size = 9;

    int start = 0;
    int end = size - 1;

    mergeSort(arr, start, end);

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}

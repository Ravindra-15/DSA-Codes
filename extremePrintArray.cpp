<<<<<<< HEAD
#include <iostream>

using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int size = 9;
    // Initialize the starting and ending indices
    int start = 0;
    int end = size - 1;
    while (start<=end){
         
        //If the start and end indices are the same, print the middle element
        if (start == end)
        {
            cout << arr[start] << " ";
        }
        else
        { 
            // Print the elements
            cout << arr[start] << " ";
            cout << arr[end] << " ";
        }
        start++;   // Move the start index forward
        end--;   // Move the end index backward
    }

    return 0;
=======
#include <iostream>

using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int size = 9;
    // Initialize the starting and ending indices
    int start = 0;
    int end = size - 1;
    while (start<=end){
         
        //If the start and end indices are the same, print the middle element
        if (start == end)
        {
            cout << arr[start] << " ";
        }
        else
        { 
            // Print the elements
            cout << arr[start] << " ";
            cout << arr[end] << " ";
        }
        start++;   // Move the start index forward
        end--;   // Move the end index backward
    }

    return 0;
>>>>>>> aa9c5819495e8f0f75d760119478bc05a2866f02
}
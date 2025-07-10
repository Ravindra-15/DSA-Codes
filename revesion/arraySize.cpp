#include <iostream>
#include <string>
using namespace std;

int main() {
    // Array example
    int arr[] = {10, 20, 30, 40, 50,};

    // Total size of array in bytes
    cout << "Size of array in bytes: " << sizeof(arr) << endl;

    // Size of one element
    cout << "Size of one element: " << sizeof(arr[0]) << endl;

    // Number of elements in the array (length)
    cout << "Number of elements in array: " << sizeof(arr) / sizeof(arr[0]) << endl;

    cout << "-----------------------------" << endl;

    // String example
    string str = "Hello World";

    // Both size() and length() give the same output
    cout << "String size using size(): " << str.size() << endl;
    cout << "String length using length(): " << str.length() << endl;

    return 0;
}

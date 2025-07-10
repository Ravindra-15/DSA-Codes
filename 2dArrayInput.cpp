<<<<<<< HEAD
#include <iostream>

using namespace std;

int main() {
    int rowNum;
    int colNum;
    cout << "Enter no of rows of array: ";
    cin >> rowNum;
    cout << "Enter no of columns of array: ";
    cin >> colNum;
    cout << endl;
    cout << "Enter elements of array :";
    int arr[rowNum][colNum];
    for(int i = 0; i < rowNum; i++){
        for(int j = 0; j < colNum; j++){
            cin >> arr[i][j];
            cout << " ";
        }
    }
    cout << "The array is:" << endl;
    for(int i = 0; i < rowNum; i++){
        for(int j = 0; j < colNum; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
=======
#include <iostream>

using namespace std;

int main() {
    int rowNum;
    int colNum;
    cout << "Enter no of rows of array: ";
    cin >> rowNum;
    cout << "Enter no of columns of array: ";
    cin >> colNum;
    cout << endl;
    cout << "Enter elements of array :";
    int arr[rowNum][colNum];
    for(int i = 0; i < rowNum; i++){
        for(int j = 0; j < colNum; j++){
            cin >> arr[i][j];
            cout << " ";
        }
    }
    cout << "The array is:" << endl;
    for(int i = 0; i < rowNum; i++){
        for(int j = 0; j < colNum; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
>>>>>>> aa9c5819495e8f0f75d760119478bc05a2866f02
}
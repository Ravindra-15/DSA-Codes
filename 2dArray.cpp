<<<<<<< HEAD
#include <iostream>

using namespace std;

int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
        
    }

    int brr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << "Printing column-wise this array :" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << brr[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
=======
#include <iostream>

using namespace std;

int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
        
    }

    int brr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << "Printing column-wise this array :" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << brr[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
>>>>>>> aa9c5819495e8f0f75d760119478bc05a2866f02
}
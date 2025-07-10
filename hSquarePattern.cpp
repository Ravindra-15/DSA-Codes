<<<<<<< HEAD
#include <iostream>
using namespace std;
int main()
{
    int rowCount;
    cout << "Enter Number of Rows: ";
    cin >> rowCount;
    
    for (int row = 0; row < rowCount; row++)
    {
        // printing stars in each column of first and last row 
        if (row == 0 || row == rowCount - 1)
        {
            for (int col = 0; col < rowCount; col++)
            {
                cout << "*";
            }
        }
        else
        {
            // first star
            cout << "*";
            // remaining middle spaces
            for (int i = 0; i < rowCount-2; i++)
            {
                cout << " ";
            }
            // last star
            cout << "*";
        }
        // new row
        cout << endl;
    }
    return 0;
=======
#include <iostream>
using namespace std;
int main()
{
    int rowCount;
    cout << "Enter Number of Rows: ";
    cin >> rowCount;
    
    for (int row = 0; row < rowCount; row++)
    {
        // printing stars in each column of first and last row 
        if (row == 0 || row == rowCount - 1)
        {
            for (int col = 0; col < rowCount; col++)
            {
                cout << "*";
            }
        }
        else
        {
            // first star
            cout << "*";
            // remaining middle spaces
            for (int i = 0; i < rowCount-2; i++)
            {
                cout << " ";
            }
            // last star
            cout << "*";
        }
        // new row
        cout << endl;
    }
    return 0;
>>>>>>> aa9c5819495e8f0f75d760119478bc05a2866f02
}
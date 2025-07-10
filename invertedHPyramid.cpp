<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int colCount;
    // taking input of columns from the user
    cout << "Enter Number of Columns:";
    cin >> colCount;
    // outer for-loop -> row observation
    for (int row = 0; row < colCount; row++)
    {
        // inner for-loop -> column observation
        for (int col = 0; col <colCount-row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
=======
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int colCount;
    // taking input of columns from the user
    cout << "Enter Number of Columns:";
    cin >> colCount;
    // outer for-loop -> row observation
    for (int row = 0; row < colCount; row++)
    {
        // inner for-loop -> column observation
        for (int col = 0; col <colCount-row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
>>>>>>> aa9c5819495e8f0f75d760119478bc05a2866f02
}
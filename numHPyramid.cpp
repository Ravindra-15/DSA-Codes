<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int rowCount;
    // taking input of rows from the user
    cout << "Enter Number of Rows:";
    cin >> rowCount;
    // outer for-loop -> row observation
    for (int row = 0; row < rowCount; row++)
    {
        // inner for-loop -> column observation
        for (int col = 0; col < row+1; col++)
        {
            cout <<col+1;
        }
        cout << endl;
    }
    return 0;
=======
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int rowCount;
    // taking input of rows from the user
    cout << "Enter Number of Rows:";
    cin >> rowCount;
    // outer for-loop -> row observation
    for (int row = 0; row < rowCount; row++)
    {
        // inner for-loop -> column observation
        for (int col = 0; col < row+1; col++)
        {
            cout <<col+1;
        }
        cout << endl;
    }
    return 0;
>>>>>>> aa9c5819495e8f0f75d760119478bc05a2866f02
}
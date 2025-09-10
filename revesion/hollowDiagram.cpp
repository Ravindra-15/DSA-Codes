#include <bits/stdc++.h>

using namespace std;

int main()
{
    int colcount, rowcount;
    cout << "Enter the rows:";
    cin >> rowcount;
    

    for (int row = 0; row < rowcount; row++)
    {
        for (int col = 0; col < rowcount - row; col++)
        {
            if (row == 0 || row == rowcount - 1 || col == 0 || col == rowcount - row - 1)
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
    }

    return 0;
}
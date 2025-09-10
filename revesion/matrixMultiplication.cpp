#include <bits/stdc++.h>

using namespace std;

int main()
{
    int r1, c1, r2, c2;
    cout << "Enter the no. of Rows and Columns of first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter the no. of Rows and Columns of second matrix: ";
    cin >> r2 >> c2;

    if (c1 != r2)
    {
        cout << "Multiplication cant be done.";
    }
    vector<vector<int>> A(r1, vector<int>(c1));
    vector<vector<int>> B(r2, vector<int>(c2));
    vector<vector<int>> prod(r1, vector<int>(c2, 0));
    cout << "Enter the values: " << endl;

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> A[i][j];
        }
    }
    cout << "Enter the values: " << endl;

    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> B[i][j];
        }
    }

    // Multiplication
    cout << "Multiplication Matrix is: " << endl;

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++)
            {
                prod[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "Printing Matrix" << endl;

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << prod[i][j] << " ";
            
        }
        cout << endl;
    }

    return 0;
}
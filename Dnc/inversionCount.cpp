#include <iostream>
#include <vector>
using namespace std;
int inversionCount(vector<int> &arr)
{
    int n = arr.size();
    int invCount = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j]);
            invCount++;
        }
    }
    return invCount;
}

int main()
{
    vector<int> arr = {4, 3, 2, 1};
    cout << inversionCount(arr);
    return 0;
}

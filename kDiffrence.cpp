<<<<<<< HEAD


// use binary search .................. this is not correct solution
#include <iostream>

using namespace std;
int findValue(int arr[], int size) 
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (abs(arr[i] - arr[j]) == 2)
            {
              ans++;
            }
        }
       
    }
     return ans;
}
int main()
{
    int arr[] = {3, 1, 4, 1, 5};
    int size = 5;
    int ans = findValue(arr, size);
    cout << ans;
    return 0;
=======
#include <iostream>

using namespace std;
int findValue(int arr[], int size) 
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (abs(arr[i] - arr[j]) == 2)
            {
              ans++;
            }
        }
       
    }
     return ans;
}
int main()
{
    int arr[] = {3, 1, 4, 1, 5};
    int size = 5;
    int ans = findValue(arr, size);
    cout << ans;
    return 0;
>>>>>>> aa9c5819495e8f0f75d760119478bc05a2866f02
}

#include <iostream>
using namespace std;

int main()
{
    int rowCount;
    cout << "Enter rows: ";
    cin >> rowCount; // 6

    for (int row = 0; row < rowCount; row++)
    {
         for(int col = 0; col < 2 * rowCount - 1; col++){
            if(col >= rowCount - row - 1 && col <= rowCount + row - 1 ){
                cout << "*";
            }else{
                cout << " ";
            }
         }
        cout << endl;
    }

    return 0;
}
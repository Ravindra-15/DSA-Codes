#include <iostream>
using namespace std;

int main() {
    int r;
    cout << "Enter rows: ";
    cin >> r;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < 2 * r - 1; j++) {
            if (i == 0 || j == i || j == 2 * r - 2 - i)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}

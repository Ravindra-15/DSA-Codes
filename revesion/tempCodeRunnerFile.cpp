#include <bits/stdc++.h>
using namespace std;

int main() {
    string name = "aB#cD$1Ef2G!"; //output: Gf#Ed$1cB2a!
    int low = 0;
    int high = name.length() - 1;

    while (low < high) {
        if (isalpha(name[low]) && isalpha(name[high])) {
            swap(name[low], name[high]);
            low++;
            high--;
        }
        else if (!isalpha(name[low])) {
            low++;
        }
        else {
            high--;
        }
    }

    cout << "New string is " << name << endl;
    return 0;
}

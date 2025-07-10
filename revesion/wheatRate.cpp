#include <bits/stdc++.h>

using namespace std;

int main()
{
    float wheatRate;
    cout << "Enter per kg Wheat Rate:" << endl;
    cin >> wheatRate;

    float wheatWeight;
    cout << "Enter wheat weight in gm:" << endl;
    cin >> wheatWeight;

    float price = (wheatRate / 1000) * wheatWeight;
    cout << "Price of weighted wheat is: " << price <<endl;

    return 0;
}
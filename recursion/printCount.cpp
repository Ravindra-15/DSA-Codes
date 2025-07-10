#include <iostream>

using namespace std;
void printCounting(int n){
    if ( n == 0){
        return;
    }
    cout << n << " " ;  // reverse counting

    printCounting(n - 1);
     


    cout << " " << n ;  // forward counting
}
int main() {
    int num;
    cout << "Enter a number: " << endl;
    cin >> num;
    printCounting(num);
    cout << endl;
    
    return 0;
}
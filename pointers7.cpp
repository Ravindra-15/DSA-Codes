<<<<<<< HEAD
#include <iostream>

// passing by reference
void solve(int& num) {
    num = 50;  // modifies the original 'a'
}

using namespace std;

int main() {
    int a = 5;

    solve(a);  // 'a' is passed by reference
    cout << a;  // Output will be 50

    return 0;
}
=======
#include <iostream>

// passing by reference
void solve(int& num) {
    num = 50;  // modifies the original 'a'
}

using namespace std;

int main() {
    int a = 5;

    solve(a);  // 'a' is passed by reference
    cout << a;  // Output will be 50

    return 0;
}
>>>>>>> aa9c5819495e8f0f75d760119478bc05a2866f02

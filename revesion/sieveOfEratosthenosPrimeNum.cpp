#include <bits/stdc++.h>
using namespace std;

int solution(int n) {
    vector<bool> prime(n, true);
    int count = 0;
    prime[0] = prime[1] = false;

    cout << "Prime numbers are: ";
    for (int i = 2; i < n; i++) {
        if (prime[i]) {
            count++;
            cout << i << " ";  // print primes in one line

            for (int j = 2 * i; j < n; j += i) {
                prime[j] = false;
            }
        }
    }
    cout << endl;  // new line after all primes are printed
    return count;
}

int main() {
    int num;
    cout << "Enter a number to which Prime numbers are needed: ";
    cin >> num;
    int totalPrimes = solution(num);
    cout << "Total prime numbers: " << totalPrimes << endl;
    return 0;
}

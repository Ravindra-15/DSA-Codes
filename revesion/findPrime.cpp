#include <bits/stdc++.h>

using namespace std;
bool isPrime(int x)
{
    if ((x <= 1))
    {
        return false;
    }
    if (x == 2)
    {
        return true;
    }
    if( x % 2 == 0){
        return false;
    }
    for (int i = 3; i <= sqrt(x); i += 2)
    {
        if(x % i == 0){
            return false;
        }
    }
    return true;  
}

int main()
{
    int x;
    cout << "Enter Number: ";
    cin >> x;
    if (isPrime(x))
    {
        cout << "Number is Prime.";
    }
    else
    {
        cout << "Number is not Prime.";
    }

    cout << endl << "All Prime Numbers upto "<<x<<" are: " << endl;;
    for(int i = 1; i <= x; i++){
        if(isPrime(i)){
            cout <<i << " ";
        }
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;
int sol(int a, int b)
{
    if (a == 0)
    {
        return a;
    }
    if (b == 0)
    {
        return b;
    }
    while( a > 0 && b > 0){
      if(a > b){
        a = a-b;
      }
      else{
        b = b - a; 
      }
    }
    return a == 0 ? b : a;
}

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int ans = sol(a, b);
    cout <<"GCD is: " << ans << endl;
    int lcm = (a * b)/ ans;
    cout << "LCM is: " << lcm;
    return 0;
}

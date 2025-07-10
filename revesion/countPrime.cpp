#include <bits/stdc++.h>

using namespace std;
bool isPrime(int index ){
    if(index <= 1){
        return false;
    }

    for(int i = 2; i < index; i++){
        if(index % i == 0){
            return false;
        }
    
    }
      
    return true;
}
int main() {
     int num; 
     cout << "Enter the number to which prime numbers are needed: ";
     cin >> num;

     int count = 0;

     for (int i = 0; i <= num; i++){
        if(isPrime(i)) {
            ++count;
        }
         
     }
     cout << "Total Prime no. are: "<< count;
}

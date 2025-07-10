<<<<<<< HEAD
#include <iostream>
#include<vector>

using namespace std;

int main() {
    vector<int> arr{1, 2, 2, 3, 4};
    int i = 0;
    int start = 0;
    int end = arr.size()-1;
    while(i != end){
        if(arr[i] == arr[i+1]){
            cout << "duplicate number :" << arr[i];
           break;
        }
        else{
            i++;
        }
    }
    
    return 0;
=======
#include <iostream>
#include<vector>

using namespace std;

int main() {
    vector<int> arr{1, 2, 2, 3, 4};
    int i = 0;
    int start = 0;
    int end = arr.size()-1;
    while(i != end){
        if(arr[i] == arr[i+1]){
            cout << "duplicate number :" << arr[i];
           break;
        }
        else{
            i++;
        }
    }
    
    return 0;
>>>>>>> aa9c5819495e8f0f75d760119478bc05a2866f02
}
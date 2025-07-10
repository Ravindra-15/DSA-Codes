<<<<<<< HEAD
#include <iostream>
using namespace std;

int main() {
    int rowCount;
    cout<< "Enter Number of Rows:";
    cin>> rowCount;
    for(int row = 0; row < rowCount; row++){
        for(int col = 0; col < rowCount-row; col++){
            cout<< "*";
        }
        cout<< endl;
    }
    return 0;
=======
#include <iostream>
using namespace std;

int main() {
    int rowCount;
    cout<< "Enter Number of Rows:";
    cin>> rowCount;
    for(int row = 0; row < rowCount; row++){
        for(int col = 0; col < rowCount-row; col++){
            cout<< "*";
        }
        cout<< endl;
    }
    return 0;
>>>>>>> aa9c5819495e8f0f75d760119478bc05a2866f02
}
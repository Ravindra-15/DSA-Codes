<<<<<<< HEAD
#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int *p = &a;

    int **q = &p;
    cout << &a << endl;
    cout << a << endl;
    cout << p << endl;
    cout << &p << endl;
    cout << *p << endl;
    cout << &q<< endl;
    cout << q << endl;
    cout << *q << endl;
    cout << **q << endl;
     

    return 0;
=======
#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int *p = &a;

    int **q = &p;
    cout << &a << endl;
    cout << a << endl;
    cout << p << endl;
    cout << &p << endl;
    cout << *p << endl;
    cout << &q<< endl;
    cout << q << endl;
    cout << *q << endl;
    cout << **q << endl;
     

    return 0;
>>>>>>> aa9c5819495e8f0f75d760119478bc05a2866f02
}
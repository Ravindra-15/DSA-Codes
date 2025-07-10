<<<<<<< HEAD
#include <iostream>
using namespace std;
float getArea(float radius){
    float result = 3.14*radius*radius;
    return result;
}
int main() {
    float radius;
    cout << "Enter The Radius of Circle :";
    cin >> radius;
    float area = getArea(radius);
    cout << "The Area of Circle is :" << area;
    return 0;
=======
#include <iostream>
using namespace std;
float getArea(float radius){
    float result = 3.14*radius*radius;
    return result;
}
int main() {
    float radius;
    cout << "Enter The Radius of Circle :";
    cin >> radius;
    float area = getArea(radius);
    cout << "The Area of Circle is :" << area;
    return 0;
>>>>>>> aa9c5819495e8f0f75d760119478bc05a2866f02
}
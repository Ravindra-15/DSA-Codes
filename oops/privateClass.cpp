#include <iostream>
using namespace std;

class animal {
    // State or properties
private:
    int weight;

public:
    // Public getter and setter methods
    int getWeight() {
        return weight;
    }

    void setWeight(int w) {
        weight = w;
    }
};

int main() {
    animal ob;
    
    // Accessing the private member through public methods
    ob.setWeight(40);
    cout << "The weight is: " << ob.getWeight() << endl;

    return 0;
}

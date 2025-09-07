#include<iostream>
using namespace std;
class animal{
    //state or properties
    private:
    int weight;
    public:
    int age;
    string name;

    //behaviour

    void eat(){
        cout << "Eating";
    }

    void sleep(){
        cout << "sleeping";
    }
     
    int getWeight(){
        return weight;
    }
    void setWeight(int w){
        weight = w;
    }
};

int main(){
    animal ob;
    ob.age = 12;
    ob.name = "Pug Dog";
    cout << "Age of animal is: " << ob.age << endl;
    cout << "Animal name is: " << ob.name << endl; 
    ob.eat();
    cout << endl;
    ob.sleep();
    cout << endl;
   
    //Acces sing the private member
    ob.setWeight(40);
    cout << "The weight is: " << ob.getWeight() << endl;
    return 0;
}

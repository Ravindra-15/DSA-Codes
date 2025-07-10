#include <iostream>
#include <cstring> // for strlen
using namespace std;

int main() {
    char name[100];
    cout << "Enter your name: ";
    cin.getline(name, 100);  // reads input including whitespaces

    cout << "Your name is: " << name << endl;

    int count = 0;
    for (int i = 0; i < strlen(name); i++) {
        if (name[i] != ' ') {     // ignore space in count
            count++;
        }
        cout << name[i] << endl;  // print each character including space
    }

    cout << "Total characters (excluding whitespaces): " << count << endl;
    return 0;
}

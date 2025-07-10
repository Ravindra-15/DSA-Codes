#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    cout << "Enter your name: ";
    getline(cin, name);   

    // Count characters excluding whitespaces
    int nonSpaceCount = 0;
    for (int i = 0; i < name.length(); i++) {
        if (name[i] != ' ') {
            nonSpaceCount++;
        }
    }

    cout << "\nTotal characters (excluding spaces): " << nonSpaceCount << endl;

    // Reversed name (including spaces)
    cout << "Reversed name is: ";
    for (int i = name.length() - 1; i >= 0; i--) {
        cout << name[i];
    }
 
    cout << endl;
    return 0;
}

// #include <iostream>
// using namespace std;

// void reverseString(string &s) {
//     int start = 0;
//     int end = s.length() - 1;

//     while (start < end) {
//         // swap characters
//         char temp = s[start];
//         s[start] = s[end];
//         s[end] = temp;

//         start++;
//         end--;
//     }
// }

// int main() {
//     string str;
//     cout << "Enter a string: ";
//     cin >> str;

//     reverseString(str);

//     cout << "Reversed string: " << str << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

void reverseString(string &s) {
    int start = 0;
    int end = s.length() - 1;

    while (start < end) {
        // swap characters
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;

        start++;
        end--;
    }
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);   // ✅ handles spaces too  
    reverseString(str);

    cout << "Reversed string: " << str << endl;

    return 0;
}

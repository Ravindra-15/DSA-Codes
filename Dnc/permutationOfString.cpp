#include <bits/stdc++.h> // Includes all standard libraries
using namespace std;

// Function to print all permutations of the string
void printPermutation(string& str, int i, int end) {
    // Base case: if current index reaches the end, print the permutation
    if(i >= end){
        cout << str << " ";
        return;
    }

    // Iterate through the string and swap characters to generate permutations
    for(int j = i; j < str.size(); j++){
        swap(str[i], str[j]); // Swap current character with the j-th character
        printPermutation(str, i + 1, end); // Recurse for the next index
        swap(str[i], str[j]); // Backtrack to restore original string
    }
}

int main() {
    string str = "abc";       // Input string
    int size = str.length();  // Get string length
    int start = 0;
    int end = size - 1;

    printPermutation(str, start, end); // Call function to print permutations
    return 0;
}

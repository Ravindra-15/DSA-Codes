#include <bits/stdc++.h>
using namespace std;

//FIRST METHOD

// bool validAnagram(string name1, string name2)
// {
//     if (name1.length() != name2.length())
//     {
//         return false; // Different lengths, cannot be anagrams
//     }

//     sort(name1.begin(), name1.end());
//     sort(name2.begin(), name2.end());

//     return name1 == name2; // Check if sorted strings are equal
// }

int main()
{
    string name1 = "nagaram";
    string name2 = "anagamr";

    // bool ans = validAnagram(name1, name2);

    // if (ans)
    // {
    //     cout << "Strings are valid anagrams" << endl;
    // }
    // else
    // {
    //     cout << "Strings are not anagrams" << endl;
    // }
 
    // BETTER METHOD

    int freqTable[256] = {0}; 
    for (int i = 0; i < name1.length(); i++)
    {
        freqTable[name1[i]]++;
    }
    for (int i = 0; i < name2.length(); i++)
    {
        freqTable[name1[i]]--;
    }
    for (int i = 0; i < 256; i++)
    {
        if (freqTable[i] != 0)
        {

            cout << "Strings are not valid anagrams" << endl;
        }
    }
    cout << "Strings are valid anagrams" << endl;
}

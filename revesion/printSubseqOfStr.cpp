#include <bits/stdc++.h>

using namespace std;

void printSubSeq(string str, string output, int i, vector<string>& v){
    int n = str.length();
    if(i >= n){
        v.push_back(output);
        return;
    }
    //exclude
    printSubSeq(str, output, i+1, v);

    //include
    output.push_back(str[i]);
    printSubSeq(str, output, i+1, v);
}

int main() {
    string str = "ab";
    int i = 0;
    string output = "";
    vector<string>v;
    printSubSeq(str, output, i, v );

    cout << "Printing all subsequences: ";
    
    for(auto val : v){
     cout << val << " ";
    }
    
    cout << endl << "length of vector: " << v.size() << endl;
    return 0;
}
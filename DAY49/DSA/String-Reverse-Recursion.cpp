#include<bits/stdc++.h>
using namespace std;

void reverse(string& str, int i, int j) {

    cout << "Reverse Call :- " << str << endl;
    // Base Case
    if (i > j)
        return;

    // Processing
    swap(str[i], str[j]);

    // Recursive Call
    reverse(str, i + 1, j - 1);
}

int main() {
    string name = "ABCDE";

    reverse(name, 0, name.length() - 1);

    cout << "Reversed String is: " << name << endl;

    return 0;
}

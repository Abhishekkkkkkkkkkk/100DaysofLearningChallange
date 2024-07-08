#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string& str, int i, int j) {

    // Base Case
    if (i > j)
        return true;

    if (str[i] != str[j]){
        return 0;
    }
    else{
        checkPalindrome(str, i + 1, j - 1);
    }
}

int main() {
    string s = "Abhishek";

    bool isPalindrome = checkPalindrome(s, 0, s.length() - 1);

    if(isPalindrome){
        cout << "Given String is a Palindrome" << endl;
    }
    else{
        cout << "Given String is not a Palindrome" << endl;
    }

    return 0;
}

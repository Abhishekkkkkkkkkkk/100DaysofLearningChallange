#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter the value of ch" << endl;
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
        cout << ch << " is an UpperCase character.\n";

    else if (ch >= 'a' && ch <= 'z')
        cout << ch << " is an LowerCase character.\n";

    else if (ch >= '0' && ch <= '9')
    {
        cout << ch << " is a Numeric number between 1 to 9.\n";
    }
}
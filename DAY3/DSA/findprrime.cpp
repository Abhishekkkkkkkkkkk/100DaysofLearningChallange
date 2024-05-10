#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter your input" << endl;
    cin >> n;

    int num = 2;

    if (num < n)
    {
        if (n % num == 0)
        {
            cout << "prime" << endl;
        }
    }
    else
    {
        cout << "not prime" << endl;
        num = num + 1;
    }
}
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin >>a;
    cin >>b;

    if (a > b)
    {
        cout << "a is greater than b." << endl;
    }
    if (b > a)
    {
        cout << "b is greater than a." << endl;
    }
    int x;
    cin >> x;
    if (x >= 0)
    {
        cout << "Given number is Positive.";
    }
    else
        cout << "Given number is Negitive.";
}
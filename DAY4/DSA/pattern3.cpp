#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;

    // Print this pattern
    // 1234
    // 1234
    // 1234
    // 1234

    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)

    //     {
    //         cout << j;
    //         j = j + 1;
    //     }
    //     cout << endl;

    //     i = i + 1;
    // }


    // Print this pattern
    // 4321
    // 4321
    // 4321
    // 4321

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)

        {
            cout << n-j+1;
            j = j + 1;
        }
        cout << endl;

        i = i + 1;
    }
}
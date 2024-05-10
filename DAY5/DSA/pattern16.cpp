#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;

    // Print this pattern
    // D
    // C D
    // B C D
    // A B C D

    int row = 1;

    while (row <= n)
    {
        int col = 1;
        char start = 'A' + n - row;

        while (col <= row)
        {

            cout << start << " ";
            start = start + 1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;

    // Print this pattern
    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10

    int row = 1;
    int count = 1;
     while (row <= n)
    {
        int col = 1;
        while (col <= row)

        {
            cout << count << " ";
            count = count + 1;
            col = col + 1;
        }
        cout << endl;

        row = row + 1;
    }
}
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;

    // Print this pattern
    // 1
    // 22
    // 333
    // 4444
    

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)

        {
            cout << row;
            
            col = col + 1;
        }
        cout << endl;

        row = row + 1;
    }


}
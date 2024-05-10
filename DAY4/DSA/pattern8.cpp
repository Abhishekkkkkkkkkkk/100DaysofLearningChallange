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
    // 3 4 5
    // 4 5 6 7

    int row = 1;
    while (row <= n) {
        int col = 1;
        // int value = row; 
        while (col <= row) {
            cout << row + col - 1 << " ";
            // value = value +1; 
            col = col +1;
        }
        cout << endl;

        row = row  +1;
    }
}
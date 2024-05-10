#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;

    // Print this pattern

    //* * * *
    //  * * *
    //    * *
    //      *

    int row = 1;
    while (row <= n) {
        // Print leading spaces
        int space = 1;
        while (space < row) {
            cout << "  ";
            space++;
        }

        // Print asterisks
        int col = row;
        while (col <= n) {
            cout << "* ";
            col++;
        }
        cout << endl;
        row++;
    }
}

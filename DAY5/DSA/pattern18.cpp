#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;

    // Print this pattern

    //* * * *
    //* * *
    //* *
    //*

    int row = n;
    while (row >= 1) // Loop for rows, starting from n and decrementing
    {
        int col = 1;
        while (col <= row) // Loop for columns
        {
            cout << "* ";
            col++;
        }
        cout << endl; // Move to the next line after printing each row
        row--;
    }
}

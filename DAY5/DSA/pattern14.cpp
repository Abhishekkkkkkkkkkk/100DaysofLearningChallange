#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;

    // Print this pattern
    // A 
    // B C
    // D E F
    // G H I J

    int row = 1;
    char start = 'A';
    
    
    while (row <= n)
    {
        int col = 1;
        
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

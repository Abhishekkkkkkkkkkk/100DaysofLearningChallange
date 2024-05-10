#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;

    // Print this pattern
    // A 
    // B B 
    // C C C

    int row = 1;
    
    
    while (row <= n)
    {
        int col = 1;
        
        while (col <= row)
        {
char start = ('A' + row - 1);
            cout << start << " ";
            start = start + 1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;

    // Print this pattern
              //     *
             //    * *
  //             * * *
 //            * * * *

    int row = 1;

    while (row <= n)
    {
        int space = n - row;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }

        int col = 1;
        while (col <= row)
        {

            cout << "*";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}

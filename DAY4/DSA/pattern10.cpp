// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the value of n" << endl;
//     cin >> n;

//     // Print this pattern
//     // A A A
//     // B B B
//     // C C C

//     int row = 1;
//     while (row <= n) {
//         int col = 1;
//         char ch = 'A' + row - 1;
//         while (col <= n)
//         {
//             cout << ch << " ";
//             col = col +1 ;
//         }
//         cout << endl;
//         row = row +1;
//     }
// }



#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;

    // Print this pattern
    // A B C
    // A B C
    // A B C

    int row = 1;
    while (row <= n) {
        int col = 1;
        while (col <= n) {
            char ch = 'A' + col - 1;
            cout << ch << " ";
            col++;
        }
        cout << endl;
        row = row +1;
    }
}


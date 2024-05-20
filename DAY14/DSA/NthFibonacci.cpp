#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    if (n < 0) {
        cout << "Invalid input! Please enter a non-negative integer." << endl;
        return 1;
    }

    if (n == 0) {
        cout << "Fibonacci number at position " << n << " is " << 0 << endl;
        return 0;
    }
    if (n == 1) {
        cout << "Fibonacci number at position " << n << " is " << 1 << endl;
        return 0;
    }

    int a = 0;
    int b = 1;
    int NextNumber;

    for (int i = 2; i <= n; i++) {
        NextNumber = a + b;
        a = b;
        b = NextNumber;
    }

    cout << "Fibonacci number at position " << n << " is " << b << endl;

    return 0;
}

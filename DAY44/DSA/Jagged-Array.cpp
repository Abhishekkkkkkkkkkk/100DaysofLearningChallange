#include <iostream>
using namespace std;

int main() {
    cout << "Enter the number of rows :- " << endl;
    int row;
    cin >> row;

    // Create the jagged array
    int** arr = new int*[row];

    // Input the number of columns for each row
    int* col = new int[row];
    for (int i = 0; i < row; i++) {
        cout << "Enter the number of columns for each row :- " << i + 1 << ": " << endl;
        cin >> col[i];
        arr[i] = new int[col[i]];
    }

    // Taking input for the jagged array
    cout << "Enter your input :- " << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col[i]; j++) {
            cin >> arr[i][j];
        }
    }

    // Printing the jagged array
    cout << "Your output is here :- " << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col[i]; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Deallocate memory
    for (int i = 0; i < row; i++) {
        delete[] arr[i];
    }
    delete[] arr;
    delete[] col;

    return 0;
}

#include<iostream>
using namespace std;

int main(){
    // cout << "Enter The Size of 2D Array :- " << endl;
    // int n;
    // cin >> n;

    // // Creation of Variable Size 2D Array
    // int** arr = new int* [n];
    // for (int i = 0; i < n; i++){
    //     arr[i] = new int[n];
    // }

    // // Taking Input 
    // cout << "Enter Your Input :- " << endl;
    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < n; j++){
    //         cin >> arr[i][j];
    //     }
    // }

    // // Printing 2D Array
    // cout << "Your Output is Here :- " << endl;
    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < n; j++){
    //         cout << arr[i][j] << " ";
    //     }cout << endl;
    // }


    // Doing Same thing When Number of Row's and Cloumn's are Different

    cout << "Enter The Size of Row:- " << endl;
    int row;
    cin >> row;

    cout << "Enter The Size of Column:- " << endl;
    int col;
    cin >> col;

    // Creation of Variable Size 2D Array
    int** arr = new int* [row];
    for (int i = 0; i < row; i++){
        arr[i] = new int[col];
    }

    // Taking Input 
    cout << "Enter Your Input :- " << endl;
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cin >> arr[i][j];
        }
    }

    // Printing 2D Array
    cout << "Your Output is Here :- " << endl;
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cout << arr[i][j] << " ";
        }cout << endl;
    }


    // Releasing Memory -- 1st 
    for (int i = 0; i < row; i++){
        delete [] arr[i]; 
    }

    // Releasing Memory -- 2nd
    delete [] arr;
    

    return 0;
}
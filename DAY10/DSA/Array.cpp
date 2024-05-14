// #include<iostream>
// using namespace std;
// int main() {

    //declearation of array

    // int number[15];

    //accessing an array at different index

    // cout <<"Value at 0th index " <<number[0] <<endl;
    // cout <<"Value at 5th index " <<number[4] <<endl;
    // cout <<"Value at 9th index " <<number[8] <<endl;
    // cout <<"Value at 13th index " <<number[12] <<endl;

    // Initializing an array

    // int arr[3] = {4, 7, 11} ;

    //accessing an array at different index
//     cout <<"Value at 2nd index " <<arr[2] <<endl;

//     int arr1[15] = {3, 7};
//     int n = 15;

//     cout << "Printing the array "<< endl;

//     for(int i = 0; i<n; i++){
//         cout<< arr1[i] << " ";
//     }
// cout<<endl;
// int arr2[10] = {0};
//     n = 10;

//     cout << "Printing the array "<< endl;

//     for(int i = 0; i<n; i++){
//         cout<< arr2[i] << " ";
//     }
// cout<<endl;
//     int arr3[10] = {1};
//     n = 10;

//     cout << "Printing the array "<< endl;

//initializing all element with 1 is not possible with below line

//     for(int i = 0; i<n; i++){
//         cout<< arr3[i] << " ";
//     }

// cout<<endl;
//     cout<< "Everything is fine"<<endl;
// }



// Doing above things using function


#include<iostream>
using namespace std;

void PrintArray(int arr[], int size){
    cout << "Printing the array "<< endl;

    for(int i = 0; i<size; i++){
        cout<< arr[i] << " ";
    }

    cout << "Printing Done"<< endl;

}

int main() {

    //declearation of array

    int number[15];

    //accessing an array at different index

    cout <<"Value at 0th index " <<number[0] <<endl;
    cout <<"Value at 5th index " <<number[4] <<endl;
    cout <<"Value at 9th index " <<number[8] <<endl;
    cout <<"Value at 13th index " <<number[12] <<endl;

    // Initializing an array

    int arr[3] = {4, 7, 11} ;

    //accessing an array at different index
    cout <<"Value at 2nd index " <<arr[2] <<endl;


    int arr1[15] = {3, 7};
    int n = 15;

    PrintArray(arr1, 15);
    cout<<endl;

    int arr1Size = sizeof(arr1)/sizeof(int);
    cout<< "Size of arr1 is "<<arr1Size <<endl;

       int arr2[10] = {0};
       n = 10;

     PrintArray(arr2, 10);
     cout<<endl;

    int arr3[10] = {1};
    n = 10;
    //initializing all element with 1 is not possible with below line
    PrintArray(arr3, 10);

    int arr3Size = sizeof(arr3)/sizeof(int);
    cout<< "Size of arr3 is "<<arr3Size <<endl;


    char ch[8] = {'a', 'b', 'h', 'i', 's', 'h', 'e', 'k'};
    cout << "Third index character of this array is "<<ch[3] <<endl;

    float firstFloat[6];
    double firstDouble[7];
    bool firstBool[9];






cout<<endl;
    cout<< "Everything is fine"<<endl;
}
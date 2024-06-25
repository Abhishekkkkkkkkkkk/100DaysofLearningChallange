#include<iostream>
using namespace std;

// void print(int *p){
//     cout << *p << endl;
// }

// void update(int *p){
//     // p = p + 1;
//     // cout << "Inside update function: " << p << endl;
//     *p = *p + 1;
// }

int getSum(int *arr, int n){
    cout << endl << "Size is " << sizeof(arr) << endl;

    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){

    /*

    int value = 10;
    int *p = &value;

    // print(p);

    // cout << "Before " << p << endl;
    cout << "Before " << *p << endl;
    update(p);
    // cout << "After " << p << endl;
    cout << "After " << *p << endl;

    */



    int arr[6] = {1,2,3,4,5,8};
    // Passing arr + 3 points to the 4th element in the array
    // The second argument should be adjusted to consider only the elements after the third one
    cout << "Sum is: " << getSum(arr + 3, 3) << endl;


    return 0;
}
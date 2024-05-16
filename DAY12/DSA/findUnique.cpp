// You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].

// Now, in the given array/list, 'M' numbers are present twice and one number is present only once.

// You need to find and return that number which is unique in the array/list.

#include<iostream>
using namespace std;

int findUnique(int arr[], int n)
{
    int num = 0;
 

    for (int i = 0; i < n; i++) {
 
        num = num ^ arr[i];
    }
 

    return num;
}
int main() {
    int arr[] = { 1, 3, 4, 1, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    
    cout << findUnique(arr, n) << endl;
 
    return 0;
}
// You are given an array ‘ARR’ of size ‘N’ containing each number between 1 and ‘N’ - 1 at least once. There is a single integer value that is present in the array twice. Your task is to find the duplicate integer value present in the array.

// For example:

// Consider ARR = [1, 2, 3, 4, 4], the duplicate integer value present in the array is 4. Hence, the answer is 4 in this case.

#include<iostream>
using namespace std;

int findUnique(int arr[], int n)
{
    int num = 0;

    for (int i = 0; i < n; i++) {
 
        num = num ^ arr[i];
    }
    for (int i = 1; i < n; i++) {
 
        num = num ^ i;
    }

    return num;
}
int main() {
    int arr[] = { 1, 2, 3, 4, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    
    cout << findUnique(arr, n) << endl;
 
    return 0;
}
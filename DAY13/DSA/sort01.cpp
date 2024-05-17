#include <bits/stdc++.h>
using namespace std;


void printArray(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout << arr[i] <<" ";
    }cout << endl;
}

void sortOne(int arr[], int n){

    int left = 0; int right = n-1;

    while(left < right){

        while(arr[left] == 0 && left<right){
            left++;

        }

        while(arr[right] == 1 && left <right){
            right--;

        }

        // agar yaha tk aa gaye hai iska matlab ye hua hai ki left ==1 && right ==0

        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

int main() {
    int arr[8] = {1, 1, 0, 0, 1, 0,1, 0};

    sortOne(arr, 8);

    printArray(arr, 8);

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int n) {
    int start = 0;
    int end = n-1;

    while(start <= end){
        swap(arr[start], arr[end]);
        start++;
        end--;

    }

   

}

void printArray(int arr[], int n){

    for(int i=0; i<n; i++){
        cout<< arr[i] << " ";
    }
    cout<<endl;
}


int main() {
    
    //Taking input in array and then get the reverse in an array

    // int size;
    // cin >> size;
    // int num[100];

    // for(int i = 0; i < size; i++){
    //     cin >> num[i];
    // }

    // reverseArray(num, size);
    // printArray(num, size);



    // Reverse of decleared array

    int arr1[6] = {1, 2, 3, 4, 5, 6};
    int arr2[5] = {2, 6, 3, 9, 5};

    reverseArray(arr1, 6);
    reverseArray(arr2, 5);

    printArray(arr1, 6);
    printArray(arr2, 5);

   

    return 0;
}
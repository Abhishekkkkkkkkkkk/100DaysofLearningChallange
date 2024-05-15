#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int n) {
    int start = 0;
    int end = 1;

    while(start < (n-1) && end < n){
        swap(arr[start], arr[end]);
        start =  start + 2;
        end = end + 2;

    } 

}

void printArray(int arr[], int n){

    for(int i=0; i<n; i++){
        cout<< arr[i] << " ";
    }
    cout<<endl;
}

int main() {
    
    //Taking input in array and then get the alternative reverse in an array

    int size;
    cin >> size;
    int num[100];

    for(int i = 0; i < size; i++){
        cin >> num[i];
    }

    reverseArray(num, size);
    printArray(num, size);



    // Alternative Reverse of decleared array

    // int arr1[6] = {1, 2, 3, 4, 5, 6};

    // reverseArray(arr1, 6);

    // printArray(arr1, 6);

    return 0;
}
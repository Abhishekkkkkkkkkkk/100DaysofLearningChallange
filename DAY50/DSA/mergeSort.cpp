#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int s, int e){

    int mid = s + (e - s) / 2;

    int length1 = mid - s + 1;
    int length2 = e - mid;

    int* first = new int[length1];
    int* second = new int[length2];


    // copy values from for length1
    int MainArrIndex = s;
    for(int i = 0; i < length1; i++){
        first[i] = arr[MainArrIndex++];
    }

    // copy values from for length2
    MainArrIndex = mid + 1;
    for(int i = 0; i < length2; i++){
        second[i] = arr[MainArrIndex++];
    }

    // Merge Two Sorted Array 
    int index1 = 0;
    int index2 = 0;
    MainArrIndex = s;

    while(index1 < length1 && index2 < length2){
        if(first[index1] < second[index2]){
            arr[MainArrIndex++] = first[index1++];
        }
        else{
            arr[MainArrIndex++] = second[index2++];
        }
    }

    while (index1 < length1){
        arr[MainArrIndex++] = first[index1++];
    }

    while (index2 < length2){
        arr[MainArrIndex++] = second[index2++];
    }

    delete [] first;
    delete [] second;  
}

void mergeSort(int arr[], int s, int e){

    // base case 
    if(s>=e)
    return;

    int mid = s + (e - s) / 2;

    // Left Part Sorting 
    mergeSort(arr, s, mid);

    // Right Part Sorting 
    mergeSort(arr, mid+1, e);

    // Megre Left and Right Part 
    merge(arr, s, e);
}

int main(){

    int arr[15] = {2,5,1,6,9,0,10,34,53,11,22,12,11,4,7};
    int n = 15;


    mergeSort(arr, 0, n-1);
    
    cout << "Array after sorting using Merge Sort is :- " << endl;
    for(int i = 0; i< n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
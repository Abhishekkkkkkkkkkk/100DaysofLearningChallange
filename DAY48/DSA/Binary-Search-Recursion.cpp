#include<iostream>
using namespace std;

void print(int arr[], int s, int e){
        for(int i = s; i <= e; i++){
            cout << arr[i] << " ";
        }cout<<endl;
}
bool binarySearch(int *arr, int start, int end, int key){

        // Priinting Array 
        print(arr, start, end);

    // Base Case 
    // if element not found 
    if(start > end){
        return false;
    }

    int mid = start + (end - start) / 2;
    cout << "Value of Mid is " << arr[mid] << endl;

    // if element found 
    if(arr[mid] == key){
        return true;
    }

    // Recursive Case
    if(arr[0] == key){
        return true;
    }

    if(arr[mid] < key){
        binarySearch(arr, mid + 1, end, key);
    }
    else{
        binarySearch(arr, start, mid + 1, key);
    }
}

int main(){
    int arr[6] = {2,4,6,10,14,18};
    int size = 6;
    int key = 18;

    cout << "Present or Not " << binarySearch(arr, 0, 5, key) << endl;

    return 0;
}
#include<iostream>
using namespace std;
    bool linearSearch(int *arr, int size, int key){
    // Base Case 
    if(size == 0){
        return false;
    }

    // Recursive Case
    if(arr[0] == key){
        return true;
    }
    else{
        bool remainingPart = linearSearch(arr + 1, size - 1, key);
        return remainingPart;
    }
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int size = 6;
    int key;

    int ans = linearSearch(arr, size, key);

    if(ans){
        cout << "Element Found" << endl;
    }
    else{
        cout << "Element Not Found" << endl;
    }
}
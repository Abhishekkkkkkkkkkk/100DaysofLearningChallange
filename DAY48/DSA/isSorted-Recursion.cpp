#include<iostream>
using namespace std;
bool isSorted(int *arr, int size){
    // Base Case 
    if(size == 0 || size == 1){
        return true;
    }
    // Recursive Case
    if(arr[0] > arr[1]){
        return false;
    }
    else{
        bool ans =  isSorted(arr+1, size-1);
        return ans;
    }
}

int main(){
    int arr[5] = {1,2,32,4,5};
    int size = 5;

    bool answer = isSorted(arr, size);

    if(answer){
        cout<<"Array is Sorted"<<endl;
    }
    else{
        cout<<"Array is not Sorted"<<endl;
    }

}
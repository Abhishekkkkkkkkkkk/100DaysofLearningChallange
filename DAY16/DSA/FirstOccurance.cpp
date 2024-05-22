#include<iostream>
using namespace std;

int firstOccurance(int arr[], int n, int k){
    int start = 0;
    int end = n-1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while(start <= end){

        if(arr[mid] == k){
             ans = mid;
            end = mid - 1;
        }

        // right part

        else if(k > arr[mid]){

            start = mid + 1;
        }

        // left part 

        else if(k < arr[mid]){
            end = mid - 1;
        }      
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main() {

    int arr[8] = {0, 0, 1, 1, 2, 2, 2, 2};
    int index = firstOccurance(arr, 8, 2);
    cout << "Index of First occurance of 2 is : " <<index <<endl;
    return 0;
}
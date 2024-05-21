#include<iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid =  start + (end -start) / 2;

    while( start <= end){
        if(arr[mid] == key){
            return mid;
        }

        //Right Part
        if(key > arr[mid]){
            start = mid + 1;
        }

        //Left Part
        else{
            end = mid - 1;
        }

        //Updated mid
        mid = start + (end -start) / 2;
   
    } 
    return -1;
}
int main() {

    int odd[5] = {3, 5, 7, 9, 11};
    int even[6] = {2, 4, 6, 8, 10, 12};

    int OddIndex = BinarySearch(odd, 5, 9);
    cout<<"Index of 9 in odd array is : " << OddIndex << endl;

    int EvenIndex = BinarySearch(even, 6, 12);
    cout<<"Index of 4 in even array is : " << EvenIndex  << endl;

}
#include<iostream>
using namespace std;


// Start ko Default Bana diya 
void print(int arr[], int n, int start = 0){
    for(int i=start; i<n; i++){
        cout<<arr[i]<<" ";
        }
        cout<<endl;
}

int main(){

    int arr[5] = {1,3,5,7,9};

    int size = 5;
    cout << "Defalut Argunet ke saath  Array ka Value :- " << endl;
    print (arr, size);

    cout << "Bina Defalut Argunet ke saath  Array ka Value :- " << endl;
    print (arr, size, 2);

    return 0;
}
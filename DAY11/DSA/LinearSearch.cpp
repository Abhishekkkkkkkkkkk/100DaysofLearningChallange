#include<bits/stdc++.h>
using namespace std;

bool search(int arr[], int size, int key) {

    for(int i = 0; i < size; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;

}


int main() {

    int arr[] = {5, 3, -2, 10, 22, -2, 6, 0, 22, 1};

    cout<< "Enter the Element for Search" <<endl;
    int key;
    cin >> key;

   bool get =  search(arr, 10, key);

   if(get ){
    cout <<"Key is Present"<<endl;
   }else{
    cout <<"Key is not Present"<<endl;
   }

    return 0;
}
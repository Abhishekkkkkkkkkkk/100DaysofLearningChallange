#include<bits/stdc++.h>
using namespace std;

int sumArray(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + arr[i];  
    }  
    return sum;

}


int main() {
    
   int arr[5] = {1,2,3,4,5};
   cout<<sizeof(arr)/sizeof(arr[0]) <<endl;

for(int i=0; i<5; i++){
        cout<< arr[i] << " ";
    }
    cout<<endl;

    cout << "Printing The Sum of Given array " << sumArray(arr, 5) <<endl;

    return 0;
}
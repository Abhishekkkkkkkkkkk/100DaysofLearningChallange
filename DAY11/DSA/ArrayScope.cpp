#include<bits/stdc++.h>
using namespace std;

void update(int arr[], int n) {

    cout<<"Inside the Function "<<endl;

    // Updating array's first element

    arr[0] = 120;

    for(int i = 0; i<3; i++){
        cout << arr[i] << " ";
    }
    cout<< endl;
    
    cout<<"Going Back to main "<<endl;

}
int main() {

    int arr[3] = {1, 5, 3};

    update(arr, 3);
    cout<< endl << "Printing the main function "<< endl;

    for(int i = 0; i<3; i++){
        cout << arr[i] << " ";
    }
    cout<< endl;

    return 0;
}
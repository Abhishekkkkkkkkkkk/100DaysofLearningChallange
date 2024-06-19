#include<iostream>
using namespace std;
// Printing Row Wise Sum 
void printRowWiseSum(int arr[][3], int i, int j){

    cout <<"Printing Row Wise Sum :- "<<endl;

    for(int i = 0; i<3; i++){
        int sum = 0;
        for(int j = 0; j<3; j++){
            sum +=arr[i][j];
        }
        cout<<sum <<" ";
    }
  cout<<endl;
}

// Printing Column Wise Sum 
void printColWiseSum(int arr[][3], int i, int j){

    cout <<"Printing Column Wise Sum :- "<<endl;

    for(int i = 0; i<3; i++){
        int sum = 0;
        for(int j = 0; j<3; j++){
            sum +=arr[j][i];
        }
        cout<<sum <<" ";
    }
  cout<<endl;
}

int main() {

    int arr[3][3];

    // Input 
    cout <<"Enter the element :- "<<endl;
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            cin >>arr[i][j];
        }
    }

    // Output 
    cout<<"Printing the array :- "<<endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << arr[i][j] << " ";
    }
    cout << endl;
}

    printRowWiseSum(arr, 3, 3);
    printColWiseSum(arr, 3, 3);





    return 0;

}
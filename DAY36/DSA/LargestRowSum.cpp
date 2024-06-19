#include<iostream>
using namespace std;

int largestRowSum(int arr[][3], int i, int j){
    int maxi = INT16_MIN;
    int rowIndex = -1;

    for(int i = 0; i<3; i++){
        int sum = 0;
        for(int j = 0; j<3; j++){
            sum +=arr[i][j];
        }
        if(sum > maxi){
            maxi = sum;
            rowIndex = i;

        }
    }
  cout<<"The Maximum Sum is :- "<<maxi<<endl;
  return rowIndex;
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

int answer = largestRowSum(arr, 3, 3);
cout<<"The maximum row is at Index :- "<<answer<<endl;

    return 0;

}
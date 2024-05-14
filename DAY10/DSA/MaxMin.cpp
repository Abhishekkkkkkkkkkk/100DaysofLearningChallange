#include<bits/stdc++.h>
using namespace std;

int getMax(int num[], int n){
    int maximum = INT_MIN;
    for(int i = 0; i < n; i++){

        maximum = max(maximum, num[i]);
        
        // if(num[i] > max){
        //     max = num[i];
        // }
    }
    return maximum;

}
int getMin(int num[], int n){
    int minimum = INT_MAX;
    for(int i = 0; i < n; i++){

        minimum = min(minimum, num[i]);

        // if(num[i] < min){
        //     min = num[i];
        // }
    }
    return minimum;
}

int main() {
    int size;
    cin >> size;
    int num[100];

    //Taking input in array

    for(int i = 0; i < size; i++){
        cin >> num[i];
    }
    
    cout << "Maximun value in the array is : " << getMax(num, size) <<endl;
    cout << "Minimum  value in the array is : " << getMin(num, size) <<endl;
    return 0;
}
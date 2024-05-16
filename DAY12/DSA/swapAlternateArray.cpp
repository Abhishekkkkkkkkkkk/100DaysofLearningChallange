#include<iostream>
using namespace std;

void alternateArray(int arr[], int n) {
    int start = 0;
    int end = 1;

    while (start < (n-1) && end < n)
    {
        swap(arr[start], arr[end]);
        start = start +2;
        end = end + 2;
    }
    

}
void printalternateArray(int arr[], int n) {
    for(int i=0; i<n; i++){
        cout<< arr[i]<< " ";
    }
}
int main() {
    int size;
    cin >> size;
    int num[100];

    for(int i = 0; i < size; i++){
        cin >> num[i];
    }

   alternateArray(num,size) ;
   cout<<endl;

   cout <<"After Changing alternate position of the array: ";
printalternateArray(num,size);
   
    return 0;
}
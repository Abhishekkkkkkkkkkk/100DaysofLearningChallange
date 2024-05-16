// // You are given two arrays 'A' and 'B' of size 'N' and 'M' respectively. Both these arrays are sorted in non-decreasing order. 
// //You have to find the intersection of these two arrays.
// // Intersection of two arrays is an array that consists of all the common elements occurring in both arrays.

#include<iostream>
#include<vector>
using namespace std;


vector<int> intersectionArray(int arr1[], int arr2[], int n, int m){
    int i = 0, j = 0;

    vector<int> ans;

  while(i<n && j<m){
    if(arr1[i] == arr2[j]){
        ans.push_back(arr1[i]);
            i++;
            j++;
    }else if(arr1[i] < arr2[j]){
            i++;
    }else
            j++;
} 
return ans;
}

void printIntersectionArray(const vector<int>& arr) {
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
}

int main() {
    int arr1[6] = {1, 2, 3, 4, 4, 5};
    int arr2[5] = {1, 3, 4, 5, 5};

    vector<int> result = intersectionArray(arr1, arr2, 6, 5);

    cout << "Intersection of arrays: ";
    printIntersectionArray(result);
    cout << endl;
   
    return 0;
}

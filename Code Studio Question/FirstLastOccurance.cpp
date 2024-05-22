// Problem statement
// You have been given a sorted array/list 'arr' consisting of ‘n’ elements. You are also given an integer ‘k’.
// Now, your task is to find the first and last occurrence of ‘k’ in 'arr'.

// Note :
// 1. If ‘k’ is not present in the array, then the first and the last occurrence will be -1. 
// 2. 'arr' may contain duplicate elements.





// #include <bits/stdc++.h> 

// int firstOccurance(vector<int>& arr, int n, int k){
//     int start = 0;
//     int end = n-1;
//     int mid = start + (end - start) / 2;
//     int ans = -1;
//     while(start <= end){

//         if(arr[mid] == k){
//              ans = mid;
//             end = mid - 1;
//         }

//         // right part

//         else if(k > arr[mid]){

//             start = mid + 1;
//         }

//         // left part 

//         else if(k < arr[mid]){
//             end = mid - 1;
//         }      
//         mid = start + (end - start) / 2;
//     }
//     return ans;
// }

// int lastOccurance(vector<int>& arr, int n, int k){
//     int start = 0;
//     int end = n-1;
//     int mid = start + (end - start) / 2;
//     int ans = -1;
//     while(start <= end){

//         if(arr[mid] == k){
//              ans = mid;
//             start = mid + 1;
//         }

//         // right part

//         else if(k > arr[mid]){

//             start = mid + 1;
//         }

//         // left part 

//         else if(k < arr[mid]){
//             end = mid - 1;
//         }      
//         mid = start + (end - start) / 2;
//     }
//     return ans;
// }

// pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
// {
//     // Write your code here
//     pair<int, int> p;
//     p.first = firstOccurance(arr, n, k);
//     p.second = lastOccurance(arr, n, k);
//     return p;
// }
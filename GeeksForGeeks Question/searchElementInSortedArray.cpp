// Given an array arr[] sorted in ascending order of size N and an integer K. Check if K is present in the array or not.

// class Solution{
//     public:
//     // Function to find element in sorted array
//     // arr: input array
//     // N: size of array
//     // K: element to be searche
//     int searchInSorted(int arr[], int N, int K) 
//     { 
    
//        // Your code here

    
//     int s = 0; int e = N-1;
//     int mid = s + (e-s) / 2;
//     while(s <= e){
//         if(arr[mid] == K){
//             return 1;
//         }
//         if(arr[mid] < K){
//             s = mid + 1;
//         }
//         else{
//             e = mid - 1;
//         }
//         mid = s + (e-s) / 2;
//     }
//     return -1;
//     }
// };
// Given two sorted arrays arr1[] and arr2[] of sizes n and m in non-decreasing order. Merge them in sorted order without using any extra space. Modify arr1 so that it contains the first N elements and modify arr2 so that it contains the last M elements.

// class Solution{
//     public:
//         //Function to merge the arrays.
//         void merge(long long arr1[], long long arr2[], int n, int m) 
//         { 
//             // code here
//             int i = n - 1;
//             int j = 0;

//             // Traverse arr1 from end and arr2 from beginning
//             while (i >= 0 && j < m){
                
//                 // If element in arr1 is greater than element in arr2, swap them
//                 if (arr1[i] > arr2[j]){
                    
//                     swap(arr1[i], arr2[j]);
//                     i--;
//                     j++;
//                 } 
//                 else{
//                     // If arr1[i] <= arr2[j], no need to swap further
//                     break; 
//                 }
//             }
//             // Sort both arrays
//             sort(arr1, arr1 + n);
//             sort(arr2, arr2 + m);
//         } 
// };
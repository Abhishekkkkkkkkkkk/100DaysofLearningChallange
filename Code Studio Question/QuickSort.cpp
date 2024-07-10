// You are given an array of integers. You need to sort the array in ascending order using quick sort.

// Quick sort is a divide and conquer algorithm in which we choose a pivot point and partition the array into two parts i.e, left and right. The left part contains the numbers smaller than the pivot element and the right part contains the numbers larger than the pivot element. Then we recursively sort the left and right parts of the array.



// #include <bits/stdc++.h>

// // Fuction for Partition 
// int partition(vector<int>& arr, int s, int e){
//     // Assume First element as Pivot Element
//     int pivot = arr[s];

//     // Count all the element which is less than or equal to pivot 
//     int count = 0;
//     for(int i = s+1; i <= e; i++){
//         if(arr[i] <= pivot)
//             count++;
//     }

//     // Place Pivot at Right Place
//     int pivotIndex = s + count;
//     swap(arr[s], arr[pivotIndex]);

//     // Condition for Left and Right Part Solve 
//     int i = s, j = e;

//     while(i < pivotIndex && j > pivotIndex){

//         while(arr[i] <= pivot){
//             i++;
//         }

//         while(arr[j] > pivot){
//             j--;
//         }

//         if(i < pivotIndex && j > pivotIndex){
//             swap(arr[i++], arr[j--]);
//         }
//     }
//     return pivotIndex;
// }

// // Function for Quick Sort 
// void solve(vector<int>& arr, int s, int e){
    
//     // Base Case 
//     if(s >= e){
//         return;
//     }

//     // Partition 
//     int p = partition(arr, s, e);

//     // Recursive Call for Left part
//     solve(arr, s, p-1);

//     // Recursive Call for Left part
//     solve(arr, p+1, e);
// }

// vector<int> quickSort(vector<int> arr)
// {
//     // Write your code here.
//     solve(arr, 0, arr.size()-1);
//     return arr;
// }
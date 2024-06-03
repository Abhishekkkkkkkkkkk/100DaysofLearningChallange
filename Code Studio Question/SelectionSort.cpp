// Problem statement
// Selection sort is one of the sorting algorithms that works by repeatedly finding the minimum element from the unsorted part of the array and putting it at the beginning of the unsorted region of the array.

// You are given an unsorted array consisting of N non-negative integers. Your task is to sort the array in non-decreasing order using the Selection Sort algorithm.


// #include <bits/stdc++.h> 
// void selectionSort(vector<int>& arr, int n)
// {   
//     // Write your code here.
//     for(int i = 0; i<n-1; i++){

//         int minIndex = i;

//         for(int j=i+1; j<n; j++){

//             if(arr[j] < arr[minIndex])
//             minIndex = j;
//         }
//         swap(arr[i], arr[minIndex]);
//     }
// }
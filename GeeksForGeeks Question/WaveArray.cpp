// Given a sorted array arr[] of distinct integers. Sort the array into a wave-like array(In Place). In other words, arrange the elements into a sequence such that arr[1] >= arr[2] <= arr[3] >= arr[4] <= arr[5].....
// If there are multiple solutions, find the lexicographically smallest one.

// Note: The given array is sorted in ascending order, and you don't need to return anything to change the original array.




// class Solution{
//     public:
//     // arr: input array
//     // n: size of array
//     //Function to sort the array into a wave-like array.
//     void convertToWave(int n, vector<int>& arr){
        
//         // Your code here
//         for (int i = 0; i < n - 1; i = i + 2) {
//             swap(arr[i], arr[i + 1]);
//         }
//     }
// };

// Given an array of size n-1 such that it only contains distinct integers in the range of 1 to n. Return the missing element.



// class Solution {
//   public:

//     // Note that the size of the array is n-1
//     int missingNumber(int n, vector<int>& arr) {

//         // Your code goes here
//         int k = (n * (n + 1)) / 2;
//         int sum = 0;
        
//         for(int i = 0; i < n-1; i++){
//             sum = sum + arr[i];
//         }
//         return k - sum;
//     }
// };
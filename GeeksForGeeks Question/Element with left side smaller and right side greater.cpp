// Given an unsorted array of arr. Find the first element in an array such that all of its left elements are smaller and all right elements of its are greater than it.

// Note: Return -1 if there is no such element


// class Solution {
//   public:
//     int findElement(vector<int> &arr) {
//         // Code here
//         int n = arr.size();
        
//         // Atleast size of array is equal to 3
//         if (n < 3) {
//             return -1;
//         }
//         // Initializing auxiliary arrays
//         int leftMax = arr[0];
//         int rightMin = INT_MAX;
        
//         int i = 1;

//         while (i < n - 1){
//             // Initialize rightMin to a large value
//             rightMin = INT_MAX;
            
//             // Compute the minimum value to the right of arr[i]
//             for (int j = i + 1; j < n; j++){
//                 if (arr[j] < rightMin){
//                     rightMin = arr[j];
//                 }
//             }
//             // Check if the current element is greater than leftMax and less than rightMin
//             if (arr[i] > leftMax && arr[i] < rightMin){
//                 return arr[i];
//             }
//             // Update leftMax to the maximum and Move i to the next element
//             leftMax = max(leftMax, arr[i]);
//             i++;
//         }
//         return -1;
//     }
// };


/*

Dry run for input :- arr = {4, 2, 5, 7, 2}


Initial State: leftMax = 4, i = 1.

Iteration 1:
rightMin = 2
2 > 4 (false) and 2 < 2 (false)
Update leftMax = 4
Increment i = 2

Iteration 2:
rightMin = 2
5 > 4 (true) and 5 < 2 (false)
Update leftMax = 5
Increment i = 3

Iteration 3:
rightMin = 2
7 > 5 (true) and 7 < 2 (false)
Update leftMax = 7
Increment i = 4

Iteration 4:
Loop exits because i = 4 is equal to n - 1
Result:
Return -1
No element satisfies the condition, so the final output is -1.

*/
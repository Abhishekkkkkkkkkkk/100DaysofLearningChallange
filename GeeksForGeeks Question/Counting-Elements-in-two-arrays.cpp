// Given two unsorted arrays arr1[] and arr2[]. They may contain duplicates. For each element in arr1[] count elements less than or equal to it in array arr2[].



// // function to count for each element in 1st array,
// // elements less than or equal to it in 2nd array
// class Solution{
//   public:
//     vector<int> countEleLessThanOrEqual(int arr1[], int arr2[], 
//                                  int m, int n)
//     {
//     //Your code goes here
//     sort(arr2, arr2 + n);
        
//     vector<int> ans(m);
        
//         for (int i = 0; i < m; i++) {
//             // Find the upper bound for arr1[i] in arr2
//             ans[i] = upper_bound(arr2, arr2 + n, arr1[i]) - arr2;
//         }
//         return ans;
//     }
// };
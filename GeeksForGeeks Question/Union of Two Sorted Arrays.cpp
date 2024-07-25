// Given two sorted arrays of size n and m respectively, find their union. The Union of two arrays can be defined as the common and distinct elements in the two arrays. Return the elements in sorted order.

// class Solution{
//     public:
//     //arr1,arr2 : the arrays
//     // n, m: size of arrays
//     //Function to return a list containing the union of the two arrays. 
//     vector<int> findUnion(int arr1[], int arr2[], int n, int m)
//     {
//         //Your code here
//         //return vector with correct order of elements
//         set<int> unionSet;
        
        
//         for(int i = 0; i<n; i++){
//             unionSet.insert(arr1[i]);
//         }
        
//         for(int i = 0; i<m; i++){
//             unionSet.insert(arr2[i]);
//         }
        
//         vector<int> ans(unionSet.begin(), unionSet.end());
    
//         return ans;
//     }
// };
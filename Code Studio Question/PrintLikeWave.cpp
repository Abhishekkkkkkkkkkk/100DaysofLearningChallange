// For a given two-dimensional integer array/list ‘ARR’ of size (N x M), print the ‘ARR’ in a sine wave order, i.e., print the first column top to bottom, next column bottom to top, and so on.

// For eg:-

// The sine wave for the matrix:-
// 1 2
// 3 4
// will be [1, 3, 4, 2].



// #include <bits/stdc++.h> 
// vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
// {
//     //Write your code here
//     vector<int> ans;
    
//     for(int col = 0; col<mCols; col++){

//         if(col & 1 ){
//             // For Odd Index - Bottom to Top
//             for(int row = nRows-1; row >= 0; row--){
//                 ans.push_back(arr[row][col]);

//             }
//         }
//         else{
//             // For 0 and Even Index - Top to Bottom
//             for(int row = 0; row < nRows; row++){ 
//                ans.push_back(arr[row][col]);
//             } 
//         }
//     }
//     return ans;
// }
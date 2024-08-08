// Given a positive integer n, generate an n x n matrix filled with elements from 1 to n2 in spiral order.


// class Solution {
// public:
//     vector<vector<int>> generateMatrix(int n) {
        
//         // Initialize the matrix with zeros
//         vector<vector<int>> ans(n, vector<int>(n, 0));     
//         int count = 1;
//         int total = n * n;
        
//         // Index Initialization
//         int startingRow = 0;
//         int endingCol = n - 1;
//         int endingRow = n - 1;
//         int startingCol = 0;
        
//         while(count <= total){
            
//             // Printing the Starting Row
//             for(int index = startingCol; count <= total && index <= endingCol; index++)
//                 ans[startingRow][index] = count++;    
//             startingRow++;
            
//             // Printing the Ending Column
//             for(int index = startingRow; count <= total && index <= endingRow; index++)
//                 ans[index][endingCol] = count++;  
//             endingCol--;
            
//             // Printing the Ending Row
//             for(int index = endingCol; count <= total && index >= startingCol; index--)
//                 ans[endingRow][index] = count++;
//             endingRow--;
            
//             // Printing the Starting Column
//             for(int index = endingRow; count <= total && index >= startingRow; index--)
//                 ans[index][startingCol] = count++;
//             startingCol++;   
//         }
//         return ans;
//     }
// };
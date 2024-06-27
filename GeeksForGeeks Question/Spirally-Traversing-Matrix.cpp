// Given a matrix of size r*c. Traverse the matrix in spiral form.



// class Solution
// {   
//     public: 
//     //Function to return a list of integers denoting spiral traversal of matrix.
//     vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
//     {
//         // code here
//         vector<int> ans;
//         int count = 0;
//         int total = r * c;
        
//         // Index Initialization
//         int SR = 0;
//         int SC = 0;
//         int ER = r - 1;
//         int EC = c - 1;
        
//         while(count < total){
            
//             // Printing Starting Row
//             for(int i = SC; count < total && i <= EC; i++){
//                 ans.push_back(matrix[SR][i]);
//                 count++;
//             }
//             SR++;
            
//             // Printing Ending Column
//             for(int i = SR; count < total && i <= ER; i++){
//                 ans.push_back(matrix[i][EC]);
//                 count++;
//             }
//             EC--;
            
//             // Printing Ending Row
//             for(int i = EC; count < total && i >= SC; i--){
//                 ans.push_back(matrix[ER][i]);
//                 count++;
//             }
//             ER--;
            
//             // Printing Starting Column
//             for(int i = ER; count < total && i >= SR; i--){
//                 ans.push_back(matrix[i][SC]);
//                 count++;
//             }
//             SC++;
//         }
//         return ans;
//     }
// };
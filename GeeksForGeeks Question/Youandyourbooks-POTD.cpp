// You have n stacks of books. Each stack of books has some nonzero height arr[i] equal to the number of books on that stack ( considering all the books are identical and each book has a height of 1 unit ). In one move, you can select any number of consecutive stacks of books such that the height of each selected stack of books arr[i] <= k. Once such a sequence of stacks is chosen, You can collect any number of books from the chosen sequence of stacks.
// What is the maximum number of books that you can collect this way?




// class Solution {
//   public:
//     /*You are requried to complete this method */
//     long long max_Books(int arr[], int n, int k) {
//         // Your code here
//         long long ans = 0;
        
//         for(int i = 0; i<n; i++){
            
//             long long currSeq = 0;
            
//             while(i<n && arr[i] <= k){
                
//                 currSeq += arr[i];
                
//                 i++;
//             }
//             ans = max(currSeq, ans);
//         }
//         return ans;
//     }
// };

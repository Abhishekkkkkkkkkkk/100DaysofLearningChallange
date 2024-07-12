// You are given three arrays sorted in increasing order. Find the elements that are common in all three arrays.
// If there are no such elements return an empty array. In this case, the output will be -1.

// Note: can you handle the duplicates without using any additional Data Structure?


// class Solution {
//   public:
//     // Function to find common elements in three arrays.
//     vector<int> commonElements(vector<int> &arr1, vector<int> &arr2,
//                                vector<int> &arr3) {
//         // Code Here
//         vector<int> ans;
//         int i = 0, j = 0, k = 0;
        
//         while(i < arr1.size() && j < arr2.size() && k < arr3.size()){
            
//             if (arr1[i] == arr2[j] && arr2[j] == arr3[k]){
                
//                  // Avoid duplicates in the result
//                 if (ans.empty() || ans.back() != arr1[i]){
//                     ans.push_back(arr1[i]);
//                 }
//                 i++;
//                 j++;
//                 k++;
//             } 
//             else if (arr1[i] < arr2[j])
//                 i++;
//             else if (arr2[j] < arr3[k])
//                 j++;
//             else
//                 k++;
//         }
//         return ans;
//     }
 
// };
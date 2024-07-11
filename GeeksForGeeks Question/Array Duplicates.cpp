// Given an array arr of size n which contains elements in range from 0 to n-1, you need to find all the elements occurring more than once in the given array. Return the answer in ascending order. If no such element is found, return list containing [-1]. 

// Note: Try and perform all operations within the provided array. The extra (non-constant) ) space needs to be used only for the array to be returned.


// class Solution {
//   public:
//     vector<int> duplicates(vector<long long> arr) {
//         // code here
//         sort(arr.begin(), arr.end());
        
//         vector<int> ans;
        
//         for(long long i = 0; i < arr.size() - 1; i++) {
//             if(arr[i] == arr[i + 1]) {
//                 ans.push_back(arr[i]);
//             }
//         }
//         if (ans.empty())
//             return {-1}; // Return a vector containing -1 if no duplicates are found
//         return ans;
//     }
// };
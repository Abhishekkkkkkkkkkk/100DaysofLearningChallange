// Given an array arr, and an integer k, find the number of pairs of elements in the array whose sum is k.


// class Solution {
//   public:
//     int getPairsCount(const vector<int>& arr, int k) {
//         // code here
//         unordered_map<int, int> ump;
//         int count = 0;
        
//         // Traverse the array and check for pairs
//         for (auto i : arr){
            
//             int complement = k - i;
            
//             // If the complement exists in the map,
//             // add its frequency to the count
//             if (ump.find(complement) != ump.end()){
//                 count += ump[complement];
//             }
            
//             // Add the current number to the map
//             ump[i]++;
//         }
//         return count;
//     }
// };
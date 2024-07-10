// Given an array arr of integers, check if there exist two indices i and j such that :

// i != j
// 0 <= i, j < arr.length
// arr[i] == 2 * arr[j]




// class Solution {
// public:
//     bool checkIfExist(vector<int>& arr) {
//         for(int i = 0; i < arr.size()-1; i++){
//             for(int j = i+1; j<arr.size(); j++){
//                 if(i !=j && arr[i] == 2 * arr[j] || arr[j] == 2 * arr[i])
//                     return true;
//             }   
//        }
//         return false;
//     }
// };       
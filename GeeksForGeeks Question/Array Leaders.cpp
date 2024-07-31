// Given an array arr of n positive integers, your task is to find all the leaders in the array. An element of the array is considered a leader if it is greater than all the elements on its right side or if it is equal to the maximum element on its right side. The rightmost element is always a leader.


// class Solution {
//     // Function to find the leaders in the array.
//   public:
//     vector<int> leaders(int n, int arr[]) {
//         // Code here
//         vector<int> ans;
//         int max = arr[n-1];
        
//         // Last element in the array is always a Leader
//         ans.push_back(max);
//         // Traverse from 2nd last element 
//         for(int i = n-2; i >= 0; i--){
//             // check if element of array is >= max then update max and push it into answer
//             if(arr[i] >= max){
//                 max = arr[i];
//                 ans.push_back(max);
//             }
//         }
        
//         reverse(ans.begin(), ans.end());
//         return ans;
//     }
// };
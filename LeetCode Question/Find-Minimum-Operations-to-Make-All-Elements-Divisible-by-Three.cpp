// You are given an integer array nums. In one operation, you can add or subtract 1 from any element of nums.

// Return the minimum number of operations to make all elements of nums divisible by 3.


// class Solution {
// public:
//     int minimumOperations(vector<int>& nums) {
        
//         int operationCount = 0;
//         for(int i = 0; i < nums.size(); i++){
//             if(nums[i] % 3 == 0){
//                 continue;
//             }
//             else if(nums[i] % 3 == 1){
//                 operationCount++;
//             }
//             else if(nums[i] % 3 == 2){
//                 operationCount++;
//             }
//         }
//         return operationCount;
//     }
// };
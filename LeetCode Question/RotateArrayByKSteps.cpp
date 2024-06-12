// Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
        
//         vector<int> temp(nums.size());
        
//         for(int i = 0; i<nums.size(); i++){
            
//             temp[(i+k) % nums.size()]  = nums[i];     
//         }
        
//         //Copy temp into nums
//          nums = temp;
//     }
// };
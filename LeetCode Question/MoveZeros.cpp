// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

// Note that you must do this in-place without making a copy of the array.

 

// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {

// Shift all non zeros element to left
//         int i = 0;
        
//         for(int j = 0; j<nums.size(); j++){
            
//             if(nums[j] != 0){
                
//                 swap(nums[j], nums[i]);
//                 i++;
//             }    
//         }
//     }
// };
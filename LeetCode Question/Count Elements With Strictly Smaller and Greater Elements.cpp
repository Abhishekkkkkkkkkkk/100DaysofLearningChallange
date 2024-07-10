// Given an integer array nums, return the number of elements that have both a strictly smaller and a strictly greater element appear in nums.


// class Solution {
// public:
//     int countElements(vector<int>& nums) {
        
//         if(nums.size() < 3){
//             return 0;
//         }
        
//         sort(nums.begin(), nums.end());
        
//         int count = 0;
        
//         for(int i = 1; i<nums.size(); i++){
//             if(nums[i] > nums[0] && nums[i] < nums[nums.size() -1]){
//                 count++;
//             }
//         }
//         return count;
        
//     }
// };
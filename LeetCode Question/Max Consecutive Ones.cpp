// Given a binary array nums, return the maximum number of consecutive 1's in the array.

// class Solution {
// public:
//     int findMaxConsecutiveOnes(vector<int>& nums) {
        
//         int maxCount = 0;
//         int currentCount = 0;
        
//         for(int i = 0; i<nums.size(); i++){
//             if(nums[i] == 1){
//                 currentCount++;
//             }
//             else{
//                 maxCount = max(maxCount, currentCount);
//                 currentCount = 0;
//             }
//         }
//         maxCount = max(maxCount, currentCount);
//         return maxCount;        
//     }
// };
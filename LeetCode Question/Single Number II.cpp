// Given an integer array nums where every element appears three times except for one, which appears exactly once. Find the single element and return it.

// You must implement a solution with a linear runtime complexity and use only constant extra space.


// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         // Count the frequency of each element
//         unordered_map<int, int> frequency;
//         for(int num : nums){
//             frequency[num]++;
//         }
//         // Return the element with the frequency equal to 1
//         int ans = 0;
//         for(auto & it : nums){
//             if(frequency[it] == 1){
//                 ans = it;
//             }
//         }
//         return ans;
//     }
// };


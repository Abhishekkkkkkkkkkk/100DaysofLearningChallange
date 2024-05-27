// You are given an array nums, where each number in the array appears either once or twice.

// Return the bitwise XOR of all the numbers that appear twice in the array, or 0 if no number appears twice.





// class Solution {
// public:
//     int duplicateNumbersXOR(vector<int>& nums) {
//         unordered_map<int, int> freq;
        
//         // * Store the freq of each ele in nums
//         for(int it: nums) freq[it]++;
        
//         int xorResult = 0;
//         for(auto it : freq){
//             if(it.second == 2)
//                 xorResult ^= it.first;
//         }
        
//         return xorResult;
        
//     }
// };




// class Solution {
// public:
//     int duplicateNumbersXOR(vector<int>& nums) {
        
//         sort(nums.begin(), nums.end());
        
//         int xorResult = 0;
        
//         for(int i = 0; i<nums.size(); i++){
            
//             for(int j = i+1; j<nums.size(); j++){
                
//                  if (nums[i] == nums[j]) {
                
//                 xorResult ^= nums[i];
              
//                 i++; 
//             }
              
//         }
            
//         }
        
            
//              return xorResult;
        
//     }
// };
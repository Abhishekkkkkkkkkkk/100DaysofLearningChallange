// You are given an array of characters letters that is sorted in non-decreasing order, and a character target. There are at least two different characters in letters.

// Return the smallest character in letters that is lexicographically greater than target. If such a character does not exist, return the first character in letters.



// class Solution {
// public:
//     char nextGreatestLetter(vector<char>& letters, char target) {
        
//         int s = 0;
//         int e = letters.size()-1;      
        
//         while(s <= e){
//             int mid = s + (e-s)/2;
            
//             if(letters[mid] > target){
//                 e = mid - 1;
//             }
//             else{
//                 s = mid + 1;
//             }    
//         }
//        return letters[s % letters.size()]; 
//     }
// };
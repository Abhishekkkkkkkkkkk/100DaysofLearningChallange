// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

// Given a string s, return true if it is a palindrome, or false otherwise.




// class Solution {
// public:
//     bool isPalindrome(string s) {
//         int start = 0;
//         int end = s.size() - 1;

//     while(start <= end){
        
//             // Skip non-alphanumeric characters from the start
//             if (!isalnum(s[start])) {
//                 start++;
//                 continue;
//             }

// // Another way to write
//             // while (start < end && !isalnum(s[start])) {
//             //     start++;
//             // }

//             // Skip non-alphanumeric characters from the end
//             if (!isalnum(s[end])) {
//                 end--;
//                 continue;
//             }

// // Another way to write
//             // while (start < end && !isalnum(s[end])) {
//             //     end--;
//             // }
        
//         // Compare characters after converting to lowercase
//         if(tolower(s[start]) != tolower(s[end])){
//             return 0;
//         }
        
//         else{
//             start++;
//             end--;
//          }   
//        }
//       return 1;
//    }
// };
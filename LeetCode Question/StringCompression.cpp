// Given an array of characters chars, compress it using the following algorithm:

// Begin with an empty string s. For each group of consecutive repeating characters in chars:

// If the group's length is 1, append the character to s.
// Otherwise, append the character followed by the group's length.
// The compressed string s should not be returned separately, but instead, be stored in the input character array chars. Note that group lengths that are 10 or longer will be split into multiple characters in chars.

// After you are done modifying the input array, return the new length of the array.

// You must write an algorithm that uses only constant extra space.





// class Solution {
// public:
//     int compress(vector<char>& chars) {
//         // Variable to show starting index of character
//         int i  = 0;
//         int ansIndex = 0;
        
//         int n = chars.size();
        
//         while(i < n){
            
//             int j = i+1;
            
//             // har ek character ko uske aage wale character se compare kar lo
//             while(j < n  && chars[i] == chars[j]){
                
//                 j++;
//             }   
//             // We will come here only when either the vector is completely traversed 
//             // or a different character appears
            
//             // Sotre Old Character
//             chars[ansIndex++] = chars[i];   
//             int count = j-i;      
            
//             if(count > 1){
                
//                 // Converting Counting into Single Digit and Saving in Answer
//                 string cnt = to_string(count);
                
//                 for(char ch : cnt){
                    
//                     chars[ansIndex++] = ch;
//                 }
//             }
//             // if any new character occurs 
//                 i = j;
//         }
//         return ansIndex;
//     }
// };
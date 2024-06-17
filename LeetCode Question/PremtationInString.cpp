// Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.

// In other words, return true if one of s1's permutations is the substring of s2.


// class Solution {
   
//     // Created checkEqual Function
// private:
//     bool checkEqual(int a[26], int b[26]){
//         for(int i = 0; i<26; i++){
//             if(a[i] != b[i]){
//                 return 0;
//             }    
//         }
//         return 1;
//     }
    
// public:
//     bool checkInclusion(string s1, string s2) {
//         // Created Character Count Array for String s1 
//         int count1[26] = {0};
//         for(int i = 0; i < s1.length(); i++){
//             int index = s1[i] - 'a';
//             count1[index]++;
//         }
        
//         // Traverse s2 String in Window of Size s1 Length and Compare it
//         int i = 0;
//         int windowSize = s1.length();
//         int count2[26] = {0};
        
//         // Returning for First Window
//         while(i < windowSize && i < s2.length()){
//             int index = s2[i] - 'a';
//             count2[index]++;
//             i++;
//         }
        
//         // yaha pe ek baar check kar lenge ki count1 and count2 equal hai ki nhi
//         if(checkEqual(count1, count2)){
//             return 1;
//         }
        
//         // agar true aa jata hai to thik hai warna aage ke liye Process karenge    
//         while(i < s2.length()){
            
//             // new character pe jane ke liye increment
//             char newChar = s2[i];
//             int index = newChar - 'a';
//             count2[index]++;
            
//             // aur old character ko remove karne ke liye decrement
//             char oldChar = s2[i - windowSize];
//             index = oldChar - 'a';
//             count2[index]--; 
//             i++;        
            
//             if(checkEqual(count1, count2)){
//             return 1;
//         }
            
//       }
//       return 0;  
//     }
// };
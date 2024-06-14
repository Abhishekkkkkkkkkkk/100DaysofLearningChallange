// Given a string str of lowercase alphabets. The task is to find the maximum occurring character in the string str. If more than one character occurs the maximum number of time then print the lexicographically smaller character.



// class Solution
// {
//     public:
//     //Function to find the maximum occurring character in a string.
//     char getMaxOccuringChar(string s)
//     {
//         // Your code here
//         int arr[26] = {0};

//     for(int i = 0; i<s.size(); i++){
        
//         char ch = s[i];
//         // lower case 
//         int number = 0;
//         number = ch - 'a';
//         arr[number]++;
//     }
    
//     // Find maximum occurance of character 
//     int maxi = -1;
//     int ans = 0;
//     for(int i =0; i<26; i++){
        
//         if(arr[i] > maxi){
//             ans = i;
//             maxi = arr[i];
//         }
//     } 
//     return 'a' + ans;
//   }
// };
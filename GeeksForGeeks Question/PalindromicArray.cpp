// Given a Integer array A[] of n elements. Your task is to complete the function PalinArray. Which will return 1 if all the elements of the Array are palindrome otherwise it will return 0.

// class Solution{
// public:

//      bool isPalindrome(int num){
//         int original = num;
//         int reversed = 0;
        
//         while (num > 0){
//             int digit = num % 10;
//             reversed = reversed * 10 + digit;
//             num = num / 10;
//         }
        
//         return original == reversed;
//     }
    
    
//     int PalinArray(int a[], int n)
//     {
//     	// code here
//      for (int i = 0; i < n; i++){
         
//             if (!isPalindrome(a[i])){
//                 return 0;
//             }
//         }
//         return 1;
//     }
// };
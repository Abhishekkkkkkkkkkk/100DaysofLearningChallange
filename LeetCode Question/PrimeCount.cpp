// Given an integer n, return the number of prime numbers that are strictly less than n.


// class Solution {
// public:
//     int countPrimes(int n) {
        
//         int count = 0;
//         // mark all numbers to prime
//         vector<bool> prime(n+1, true);
        
//         // 0 and 1 is not a prime number 
//         prime[0] = prime[1] = false;
        
//         for(int i = 2; i<n; i++){
            
//             // check if prime number then increment count
//             if(prime[i]){
//                 count++; 
                
//                 // mark all the multiple of i to non prime
//                 for(int j = 2*i; j<n; j = j+i)
//                 prime[j] = 0;
//           }  
//         }
//         return count;
//    }   
// };
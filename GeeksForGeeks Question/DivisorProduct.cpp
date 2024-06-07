// Given a number N, find the product of all the divisors of N (including N).


// class Solution {
//   public:
//     long long divisorProduct(long long N) {
//         // code here
        
//         const long long MOD = 1000000007;
//         long long ans = 1;
        
//         for (long long i = 1; i < sqrt(N); i++) 
        
//             if (N % i == 0) 
            
//                 ans = (ans * i * (N/i)) % MOD;
                
//        return ans; 
//     }
    
// };
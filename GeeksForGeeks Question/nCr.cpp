// Given two integers n and r, find nCr. Since the answer may be very large, calculate the answer modulo 109+7.
// Note : If r is greater than n, return 0.


int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}


class Solution{
public:
    int nCr(int n, int r){
        // code here
        if (r > n) {
            return 0;
        }
        
        int numerator = factorial(n);
        int denominator = factorial(r) * factorial(n - r);
        
        int ans = numerator / denominator;
        return ans % 100000007;
    }
    
};
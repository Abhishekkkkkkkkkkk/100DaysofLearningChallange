class Solution
{
	public:
		long long int PowMod(long long int x,long long int n,long long int M)
	{
		    // Code here
		 long long result = 1;  // Initialize result
    x = x % M;  // Update x to x % m

    while (n > 0) {
        // If n is odd, multiply x with the result
        if (n % 2 == 1) {
            result = (result * x) % M;
        }

        // n must be even now
        n = n >> 1;  // Halve the value of n i.e. n/2
        x = (x * x) % M;  // Change x to x^2
    }

    return result;
   }
};   
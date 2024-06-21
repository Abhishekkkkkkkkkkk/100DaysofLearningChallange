// Problem statement
// You are given a three integers 'X', 'N', and 'M'. Your task is to find ('X' ^ 'N') % 'M'. A ^ B is defined as A raised to power B and A % C is the remainder when A is divided by C.



// #include <bits/stdc++.h>

// int modularExponentiation(int x, int n, int m) {
// 	// Write your code here.
// 	int ans = 1;
// 	while(n > 0){
//           if (n % 2 != 0) {
//             ans = (1LL * (ans) * (x) % m) % m;
//           }
// 		x = (1LL * (x) % m * (x) % m) % m;
// 		n = n>>1;
//     }
// 	return ans;
// }
// Given a sorted array arr[] of size N without duplicates, and given a value x. Floor of x is defined as the largest element K in arr[] such that K is smaller than or equal to x. Find the index of K(0-based indexing).


// class Solution{
//   public:
//     // Function to find floor of x
//     // n: size of vector
//     // x: element whose floor is to find
//     int findFloor(vector<long long> v, long long n, long long x){
        
//         // Your code here
//         long long s = 0;
//         long long e = n - 1;
//         long long mid = s + (e - s) / 2;
//         long long ans = -1;
        
//         while(s <= e){
            
//             if(v[mid] <= x){
                
//                 ans = mid;
//                 s = mid + 1;
//             }
//             else{
//                 e = mid - 1;
//             }
//             mid = s + (e - s) / 2;
//         }
//         return ans;
//     }
// };
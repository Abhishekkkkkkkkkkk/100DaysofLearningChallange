// You are given a positive integer ‘n’.

// Your task is to find and return its square root. If ‘n’ is not a perfect square, then return the floor value of sqrt(n).

// long long int squareRoot(int n){
//         int s = 0; 
//         int e = n;
//    long long int mid = s + (e -s) / 2 ;
//     long long int ans = -1;

//     while(s <= e){

//         long long int square = mid *mid;

//         if(square == n)
//         return mid;

//          if(square < n){
//             ans = mid;
//             s = mid + 1;
//         }
//         else{
//             e = mid -1;
//         }
       
//        mid = s + (e -s) / 2 ;
//     }
//     return ans;
// }

// int floorSqrt(int n) {
//     // Write your code here.
//     return squareRoot(n);
// }

// Given two arrays A and B of equal size N, the task is to find if given arrays are equal or not. Two arrays are said to be equal if both of them contain same set of elements, arrangements (or permutation) of elements may be different though.
// Note : If there are repetitions, then counts of repeated elements must also be same for two array to be equal.


// class Solution {
// public:
//     // Function to check if two arrays are equal or not.
//     bool check(vector<ll> A, vector<ll> B, int N) {
        
//         sort(A.begin(), A.end());
//         sort(B.begin(), B.end());
        
//         vector<ll>::iterator it = B.begin();
        
//         for (int i = 0; i < N; i++) {
            
//         if (A[i] != *it)
        
//             return false;
               
//             it++;
//     }
    
//    return true;
   
// }

// };
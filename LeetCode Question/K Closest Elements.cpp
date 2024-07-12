// Given a sorted integer array arr, two integers k and x, return the k closest integers to x in the array. The result should also be sorted in ascending order.

// An integer a is closer to x than an integer b if:

// |a - x| < |b - x|, or
// |a - x| == |b - x| and a < b





// class Solution {
// public:
//     vector<int> findClosestElements(vector<int>& arr, int k, int x) {

//         vector<int> ans;
        
//         int s = 0;
//         int e = arr.size() -1;
         
//         while(e - s >= k){
            
//             if(x-arr[s] > arr[e]-x)
//                 s++;
//             else
//                 e--;
//         }
        
//         for(int i=s;i<=e;i++){
//             ans.push_back(arr[i]);
//         }
//         return ans;
//     }
// };
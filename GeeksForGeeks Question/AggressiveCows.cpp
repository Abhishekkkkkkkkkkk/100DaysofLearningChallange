// You are given an array consisting of n integers which denote the position of a stall. You are also given an integer k which denotes the number of aggressive cows. You are given the task of assigning stalls to k cows such that the minimum distance between any two of them is the maximum possible.
// The first line of input contains two space-separated integers n and k.
// The second line contains n space-separated integers denoting the position of the stalls.


// bool isPossible(vector<int>& stalls, int k, int mid) {
//     int cowCount = 1;
//     int lastPos = stalls[0];

//     for (int i = 0; i < stalls.size(); i++) {
        
//         if (stalls[i] - lastPos >= mid) {
            
//             cowCount++;
            
//             if (cowCount == k) {
//                 return true;
//             }
            
//             lastPos = stalls[i];
//         }
//     }
    
//     return false;
// }

// class Solution {
// public:

//     int solve(int n, int k, vector<int> &stalls) {
    
//         // Write your code here
//     sort(stalls.begin(), stalls.end());

//     int s = 0;
//     int maxi = stalls.back();
//     int e = maxi;
    
//     int mid = s + (e - s) / 2;

//     int ans = -1;

//     while (s <= e) {
        
//         if (isPossible(stalls, k, mid)) {
            
//             ans = mid;
//             s = mid + 1;
//         } 
//         else {
//             e = mid - 1;
//         }
        
//         mid = s + (e - s) / 2;
//     }
    
//     return ans;
    
//     }
// };
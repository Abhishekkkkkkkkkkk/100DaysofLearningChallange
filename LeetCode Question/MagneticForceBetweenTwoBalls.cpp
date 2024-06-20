// In the universe Earth C-137, Rick discovered a special form of magnetic force between two balls if they are put in his new invented basket. Rick has n empty baskets, the ith basket is at position[i], Morty has m balls and needs to distribute the balls into the baskets such that the minimum magnetic force between any two balls is maximum.

// Rick stated that magnetic force between two different balls at positions x and y is |x - y|.

// Given the integer array position and the integer m. Return the required force.



// // Function to check Possible Solution
// bool isPossible(vector<int>& position, int m, int mid) { 
//     int ballsCount = 1;
//     int lastPos = position[0];
    
//     for (int i = 0; i < position.size(); i++) {
        
//         if (position[i] - lastPos >= mid) {
//             ballsCount++;
            
//             if (ballsCount == m) {
//                 return true;
//             }  
//             lastPos = position[i];
//         }
//     }    
//     return false;
// }

// class Solution {
// public:
//     int maxDistance(vector<int>& position, int m) {
//         sort(position.begin(), position.end());

//     int s = 0;
//     int maxi = position.back();
//     int e = maxi;
    
//     int mid = s + (e - s) / 2;

//     int ans = -1;

//     while (s <= e) {
        
//         if (isPossible(position, m, mid)) {
            
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
// A sorted(in ascending order) array arr[ ] of size n with distinct elements is rotated at some unknown point, the task is to find the minimum element in it.


// class Solution {
//   public:
//     int findMin(int arr[], int n) {
//         // complete the function here
//         int low = 0;
//         int high = n - 1;     
//         int ans = INT_MAX;
        
//         while(low <= high){
            
//             int mid = low + (high - low) / 2;
            
//             if(arr[low] <= arr[mid]){
//                 ans = min(ans, arr[low]);
//                 low = mid + 1;
//             }
//             else{
//                 ans = min(ans, arr[mid]);
//                 high = mid - 1;
//             }
//         }
//        return ans;
//     }
// };
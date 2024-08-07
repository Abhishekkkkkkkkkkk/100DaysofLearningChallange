// Given a sorted and rotated array arr of n elements and a target key which is rotated at some point, and may contain duplicates and given an element key. Check whether the key is present in array A or not.


// class Solution {
//   public:
//     bool Search(int n, vector<int>& arr, int key) {
//         int low = 0;
//         int high = arr.size() - 1;
        
//         while(low <= high){
            
//             int mid = low + (high - low) / 2;
            
//             // Checking if arr[mid] == Target, then we simply return mid
//             if(arr[mid] == key) return 1;
//             // Checking if low, mid and high all are equal 
//             // then we have to shrink the search space
//             if(arr[low] == arr[mid] && arr[mid] == arr[high]){
//                 low++;
//                 high--;
//                 continue;
//             }
//             // Finding Target in Left Sorted Part
//             if(arr[low] <= arr[mid]){
                
//                 if(arr[low] <= key && key <= arr[mid]) high = mid - 1;
//                 else low = mid + 1;
//             }
//             // Finding Target in Right Sorted Part
//             else{
//                 if(arr[mid] <= key && key <= arr[high]) low = mid + 1;
//                 else high = mid - 1;
//             }
//         }
//        return 0;
//     }
// };
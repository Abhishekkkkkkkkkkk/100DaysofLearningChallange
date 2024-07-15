// Given a sorted array arr[] of positive integers. The task is to find the closest value in the array to the given number k. The array may contain duplicate values.

// Note: If the difference with k is the same for two values in the array return the greater value.



// class Solution{
//     public:
//     int findClosest( int n, int k,int arr[]) 
//     { 
//         // Complete the function
//         int s = 0;
//         int e = n - 1;
//         int mid = s + (e - s) / 2;
        
//         int closest = arr[0];
        
//         while(s <= e){
             
//             if (abs(arr[mid] - k) < abs(closest - k) || 
//                 (abs(arr[mid] - k) == abs(closest - k) && arr[mid] > closest)) {
//                 closest = arr[mid];
//             }
//             else if(arr[mid] < k){
//                 s = mid + 1;
//             }
//             else{
//                 e = mid -1;
//             }
//             mid = s + (e - s) / 2;
//         }
//         return closest;
//     } 
// };
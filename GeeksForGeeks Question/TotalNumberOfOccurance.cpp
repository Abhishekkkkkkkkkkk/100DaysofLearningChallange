// Given a sorted array Arr of size N and a number X, you need to find the number of occurrences of X in Arr.
// Your task is to complete the function count() which takes the array of integers arr, n, and x as parameters and returns an integer denoting the answer.
// If x is not present in the array (arr) then return 0.


// int firstOccurrence(int arr[], int n, int x){
//     int s = 0;
//     int e = (n - 1);
//     int mid = s +  (e - s) / 2;
//     int ans = -1;
//     while(s <= e){
//         if(arr[mid] == x){
//             ans = mid;
//             e = mid - 1;
//         }
//         else if(arr[mid] < x){
//             s = mid + 1;
//         }
//         else{
//             e = mid - 1;
//         }
//         mid = s +  (e - s) / 2;
//     }
//     return ans;
// }

// int lastOccurrence(int arr[], int n, int x){
//     int s = 0;
//     int e = (n - 1);
//     int ans = -1;
//     while(s <= e){
//         int mid = s +  (e - s) / 2;
//         if(arr[mid] == x){
//             ans = mid;
//             s = mid + 1;
//         }
//         else if(arr[mid] < x){
//             s = mid + 1;
//         }
//         else{
//             e = mid - 1;
//         }
//     }
//     return ans;
// }

// class Solution{
// public:	
// 	/* if x is present in arr[] then returns the count
// 		of occurrences of x, otherwise returns 0. */
// 	int count(int arr[], int n, int x) {
// 	    // code here
// 	     int first = firstOccurrence(arr, n, x);
//         int last = lastOccurrence(arr, n, x);
//         if (first == -1) {
//             return 0;
//         }
//         int totalOccurrence = (last - first) + 1;
//         return totalOccurrence;
// 	}
// };
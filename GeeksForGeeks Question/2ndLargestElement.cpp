// Given an array Arr of size N, print the second largest distinct element from an array. If the second largest element doesn't exist then return -1.


// class Solution{
// public:	
// 	// Function returns the second
// 	// largest elements
// 	int print2largest(int arr[], int n) {
// 	    // code here
// 	    int firstLargest = INT_MIN;
//         int secondLargest = INT_MIN;
        
// 	    for (int i = 0; i < n; i++) {
	        
//             if (arr[i] > firstLargest) {
                
//                 secondLargest = firstLargest;
//                 firstLargest = arr[i];
                
//             } 
//             else if (arr[i] > secondLargest && arr[i] != firstLargest) {
//                 secondLargest = arr[i];
//             }
//         }
        
//         if (secondLargest == INT_MIN) {
            
//             return -1;
//         } 
//         else
//             return secondLargest;
//         }

// };
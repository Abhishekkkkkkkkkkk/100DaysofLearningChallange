// Given an array arr of n integers, write a function that returns true if there is a triplet (a, b, c) from the array (where a, b, and c are on different indexes) that satisfies a2 + b2 = c2, otherwise return false.

// class Solution{
// public:
// 	// Function to check if the
// 	// Pythagorean triplet exists or not
// 	bool checkTriplet(int arr[], int n) {
// 	    // code here
// 	    // Square all the elements in the array
//         for (int i = 0; i < n; i++){
//             arr[i] = arr[i] * arr[i];
//         }

//         // Sort the array of squared elements
//         sort(arr, arr + n);

//         // Iterate from the last element to the third element
//         for (int i = n - 1; i >= 2; i--){
            
//             int left = 0;
//             int right = i - 1;

//             // Use two pointers to find a pair that sums up to arr[i]
//             while (left < right){
                
//                 int sum = arr[left] + arr[right];

//                 if (sum == arr[i]){
//                     return true;
//                 } 
//                 else if (sum < arr[i]){
//                     left++;
//                 } 
//                 else{
//                     right--;
//                 }
//             }
//         }
//         return false;
// 	}
// };



// Optimized Solution

// class Solution{
// public:
// 	// Function to check if the
// 	// Pythagorean triplet exists or not
// 	bool checkTriplet(int arr[], int n) {
	    
//         unordered_set<int> squares;

//         // Store squared values in a set
//         for (int i = 0; i < n; i++){
//             squares.insert(arr[i] * arr[i]);
//         }

//         // Check for each pair of squared values if their sum exists in the set
//         for (auto i : squares){
//             for (auto j : squares){
//                 if (squares.find(i + j) != squares.end())
//                     return true;
//             }
//         }
//         return false;
// 	}
// };
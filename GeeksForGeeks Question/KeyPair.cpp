// Given an array Arr of N positive integers and another number X. Determine whether or not there exist two elements in Arr whose sum is exactly X.


// class Solution{
// public:	
// 	// Function to check if array has 2 elements
// 	// whose sum is equal to the given value
// 	bool hasArrayTwoCandidates(int arr[], int n, int x) {
// 	    // code here
// 	    set<int> s;
	    
// 	    for(int i =0; i<n; i++){
	        
// 	        if(s.find(x - arr[i]) != s.end()) {
//                 return true;
//             }
//             s.insert(arr[i]);
//         }
//         return false;
// 	}
// };
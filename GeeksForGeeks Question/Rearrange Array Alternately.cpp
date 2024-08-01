// Given a sorted array of positive integers. Your task is to rearrange the array elements alternatively i.e first element should be max value, second should be min value, third should be second max, fourth should be second min and so on.
// Note: Modify the original array itself. Do it without using any extra space. You do not have to return anything.



// class Solution{
//     public:
//     // This function wants you to modify the given input
//     // array and no need to return anything
//     // arr: input array
//     // n: size of array
//     //Function to rearrange  the array elements alternately.
//     void rearrange(long long *arr, int n) 
//     { 
//     	// Your code here
//     	vector<int> ans;
//     	int s = 0;
//     	int e = n-1;
    	
//     	while(s<=e){
//     	    // Push the maximum element
//     	    if (e >= s){
//                 ans.push_back(arr[e]);
//                 e--;
//             }
//             // Push the minimum element
//             if (s <= e){
//                 ans.push_back(arr[s]);
//                 s++;
//             }
//     	}
//     	// Copy the rearranged elements back to the original array
//         for(int i = 0; i < n; i++){
//             arr[i] = ans[i];
//         }
//     }
// };
// The intersection of two arrays contains the elements common to both the arrays. The intersection should not count duplicate elements.
// Given two sorted arrays arr1[] and arr2[] of sizes N and M respectively. Find their intersection


// class Solution{
//     public:
//     //Function to return a list containing the intersection of two arrays.
//     vector<int> printIntersection(int arr1[], int arr2[], int N, int M) 
//     { 
//         //Your code here
//         int i = 0;
//         int j = 0;
//         vector<int> ans;
        
//         while(i < N && j < M){
            
//            if (arr1[i] == arr2[j]) {
               
//                 //This is for Avoid adding duplicates to the answer
//                 if (ans.empty() || ans.back() != arr1[i]){
                    
//                     ans.push_back(arr1[i]);
//                 }
//                 i++;
//                 j++;
                
//             }else if (arr1[i] < arr2[j]){
//                 i++;
                
//             }else {
//                 j++;
//             }
//         }
//         return ans;
//     }

// };
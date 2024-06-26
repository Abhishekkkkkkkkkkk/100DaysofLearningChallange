// Given two sorted arrays arr1 and arr2 of size N and M respectively and an element K. The task is to find the element that would be at the kth position of the final sorted array.


// class Solution{
    
//     public:
//     int kthElement(int arr1[], int arr2[], int n, int m, int k)
//     {
//         vector<int> ans;
        
//        for(int i = 0; i<n; i++){
//         //  Push all the element from arr1 into ans
//            ans.push_back(arr1[i]);
//        }
//        for(int j = 0; j<m; j++){
//            // Push all the element from arr2 into ans
//            ans.push_back(arr2[j]);
//        }
//        // sort answer 
//        sort(ans.begin(), ans.end());
       
//        // return Kth element
//        return ans[k-1];
//     }
// };
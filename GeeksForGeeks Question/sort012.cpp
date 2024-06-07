// Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.



// class Solution
// {
//     public:
//     void sort012(int a[], int n)
//     {
//         // code here
//         int left = 0; // Pointer for 0s
//         int mid = 0; // Pointer for 1s
//         int right = n - 1; // Pointer for 2s

//         while (mid <= right) {
            
//             if (a[mid] == 0) {
//                 swap(a[left], a[mid]);
//                 left++;
//                 mid++;
//             } else if (a[mid] == 1) {
//                 mid++;
//             } else { // a[mid] == 2
//                 swap(a[mid], a[right]);
//                 right--;
//             }
//         }
        
//     }
    
// };
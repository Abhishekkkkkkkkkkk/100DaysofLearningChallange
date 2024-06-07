// Given an Integer N and a list arr. Sort the array using bubble sort algorithm.

// class Solution {
//   public:
//     // Function to sort the array using bubble sort algorithm.
//     void bubbleSort(int arr[], int n) {
//         // Your code here
//         for(int i = 0; i< n-1; i++){
//             bool alreadySwapped = false;
            
//             for(int j = 0; j < n - i - 1; j++){
//                 if(arr[j] > arr[j + 1]){
//                    swap(arr[j] , arr[j + 1]);
                   
//                    alreadySwapped = true;
//                 }
//             }
//             if(alreadySwapped == false)
//             break;
//         }
//     }
// };
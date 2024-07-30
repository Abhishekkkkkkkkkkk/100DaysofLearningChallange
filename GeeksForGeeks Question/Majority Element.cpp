// Given an array A of N elements. Find the majority element in the array. A majority element in an array A of size N is an element that appears strictly more than N/2 times in the array.

// class Solution{
//   public:
//      // Function to find majority element in the array
//     // a: input array
//     // size: size of input array
//     int majorityElement(int a[], int size)
//     {
//         // your code here
//         unordered_map<int, int> ump;
        
//         // Counting the frequency of each element
//         for(int i = 0; i < size; i++){
//             ump[a[i]]++;
//         }
        
//         // finding the element with maximum frequency
//         for(auto it : ump){
//             if(it.second > size / 2){
//                 return it.first;
//             }
//         }
//         return -1;
//     }
// };
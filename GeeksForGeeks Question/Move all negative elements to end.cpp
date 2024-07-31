// Given an unsorted array arr[ ] having both negative and positive integers. The task is to place all negative elements at the end of the array without changing the order of positive elements and negative elements.


// class Solution {
//   public:
//     void segregateElements(vector<int>& arr) {
//         // Your code goes here
//         vector<int> negative;
//         vector<int> positive;
        
//         for(int i = 0; i<arr.size(); i++){
//             if(arr[i] < 0){
//                 negative.push_back(arr[i]);
//             }
//             else{
//                 positive.push_back(arr[i]);
//             }
//         }
        
//         int k = 0;
//         for(int i =0 ; i<positive.size(); i++){
//             arr[k] = positive[i];
//             k++;
//         }
//         for(int i =0 ; i<negative.size(); i++){
//             arr[k] = negative[i];
//             k++;
//         }
//     }
// };
// Given an array A of positive integers. Your task is to sort them in such a way that the first part of the array contains odd numbers sorted in descending order, rest portion contains even numbers sorted in ascending order.


// class Solution
// {
//   public:
//     void sortIt(long long arr[], long long n)
//     {
//         //code here.
//        vector<long long> oddSort, evenSort;
       
//         for (long long i = 0; i < n; i++)
//         {
//             if (arr[i] % 2 != 0)
//             {
//                 oddSort.push_back(arr[i]);
//             }
//             else
//             {
//                 evenSort.push_back(arr[i]);
//             }
//         }

//         // Sort odd numbers in descending order
//         sort(oddSort.begin(), oddSort.end(), greater<long long>());
        
//         // Sort even numbers in ascending order
//         sort(evenSort.begin(), evenSort.end());

//         // Combine sorted odd and even numbers back into the array
//         long long index = 0;
        
//         for (long long i = 0; i < oddSort.size(); i++)
//         {
//             arr[index++] = oddSort[i];
//         }
//         for (long long i = 0; i < evenSort.size(); i++)
//         {
//             arr[index++] = evenSort[i];
//         }
        
//     }
// };
// Given k sorted arrays arranged in the form of a matrix of size k * k. The task is to merge them into one sorted array. Return the merged sorted array ( as a pointer to the merged sorted arrays in cpp, as an ArrayList in java, and list in python).


// class Solution
// {
//     public:
//     //Function to merge k sorted arrays.
//     vector<int> mergeKArrays(vector<vector<int>> arr, int K)
//     {
//         //code here
//         vector<int> answer;
        
//        for(int i = 0; i<K; i++){
           
//            for(int j = 0; j<K; j++){
//                // Push all the element of arr into answer
//                answer.push_back(arr[i][j]);
//            }
//        }
//        // sort answer 
//        sort(answer.begin(),answer.end());
//        return answer ;
//     }
// };
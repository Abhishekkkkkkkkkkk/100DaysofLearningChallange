// Given a sorted and rotated array A of N distinct elements which are rotated at some point, and given an element K. The task is to find the index of the given element K in array A.



// int Search(vector<int> vec, int K) {

//     int low = 0;
//     int high = vec.size() - 1;
    
//     while(low <= high){
        
//         int mid = low + (high - low) / 2;
        
//         // Checking if vec[mid] == Target, then we simply return mid
//         if(vec[mid] == K)
//             return mid;

//         // Finding Target in Left Sorted Part
//         if(vec[low] <= vec[mid]){
            
//             if(vec[low] <= K && K <= vec[mid])
//                 high = mid - 1;
//             else
//                 low = mid + 1;
//         }
        
//         // Finding Target in Right Sorted Part
//         else{
//             if(vec[mid] <= K && K <= vec[high])
//                 low = mid + 1;
//             else
//                 high = mid - 1;
//         }
//     }
//    return -1; 
// }
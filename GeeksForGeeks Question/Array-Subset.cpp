// Given two arrays: a1[0..n-1] of size n and a2[0..m-1] of size m, where both arrays may contain duplicate elements. The task is to determine whether array a2 is a subset of array a1. It's important to note that both arrays can be sorted or unsorted. Additionally, each occurrence of a duplicate element within an array is considered as a separate element of the set.



// string isSubset(int a1[], int a2[], int n, int m) {
//     sort(a1, a1 + n);
//     sort(a2, a2 + m);
    
//     int i = 0, j = 0;
    
//     while(i < n && j < m){
//         if (a1[i] < a2[j])
//             i++;
//         else if (a1[i] == a2[j]){
//             i++;
//             j++;
//         } 
//         else
//             return "No";
//     }
//    if(j == m)
//       return "Yes";
//     else
//       return "No";
// }
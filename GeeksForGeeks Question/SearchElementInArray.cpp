// Given an integer array and another integer element. The task is to find if the given element is present in array or not.



class Solution{
    public:
    // Function to search x in arr
    // arr: input array
    // X: element to be searched for
    int search(int arr[], int N, int X)
    {
        
        // Your code 
        for(int i = 0; i<N; i++){
            if(arr[i] == X){
                return i;
                i++;
            }
        }
        return -1;
        
    }

};
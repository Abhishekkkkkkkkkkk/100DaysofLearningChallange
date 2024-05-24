// You have N books, each with A[i] number of pages. M students need to be allocated contiguous books, with each student getting at least one book.
// Out of all the permutations, the goal is to find the permutation where the sum of maximum number of pages in a book allotted to a student should be minimum, out of all possible permutations.

// Note: Return -1 if a valid assignment is not possible, and allotment should be in contiguous order (see the explanation for better understanding).





bool isPossible(int N, int M, int mid, int A[]){

	int studentCount = 1;   //Here Students Count is taken as 1

	int pageSum  = 0; 

	for(int i = 0; i<N; i++){

		if(pageSum + A[i] <= mid){
		    
			pageSum += A[i];
		}
		
		else{
			studentCount ++;
			
			if(studentCount > M || A[i] > mid){
				return false;
			}
			pageSum = 0;
			pageSum  += A[i];
		}
	}
	return true;

}

class Solution 
{
    public:
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
    if(M>N) return -1;
        
    int start = 0;
	int sum = 0;
	
	for(int i = 0; i<N; i++){
		sum  = sum + A[i];
	}
	
	int end = sum;
	int ans = -1;
	int mid = start + (end - start) / 2;

	while(start <= end){

		if(isPossible(N, M ,mid, A)){

            // Possible solution present
            ans = mid;
			end = mid - 1;
		}
		else{
			start = mid + 1; // Possible solution is not present
		}
		mid = start + (end - start) / 2;
	}
	return ans;
    }
};
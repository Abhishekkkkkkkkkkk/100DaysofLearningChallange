#include <bits/stdc++.h>
using namespace std;

bool isPossible(int n, int m, int mid, int arr[]){

	int studentCount = 1;   // yaha pe total student 1 maan ke chal rhe hai

	int pageSum  = 0; 

	for(int i = 0; i<n; i++){

		if(pageSum + arr[i] <= mid){
			pageSum += arr[i];
		}
		else{
			studentCount ++;
			if(studentCount > m || arr[i] > mid){
				return false;
			}
			pageSum = 0;
			pageSum  += arr[i];
		}
	}
	return true;

}

int bookAllocation(int arr[], int n, int m) 
{	

	int start = 0;
	int sum = 0;
	for(int i = 0; i<n; i++){
		sum  = sum + arr[i];
	}
	int end = sum;
	int ans = -1;
	int mid = start + (end - start) / 2;

	while(start <= end){

		if(isPossible(n, m ,mid, arr)){

            // Possible solution present

            ans = mid;
			end = mid - 1;
		}
		else{

            // Possible solution is not present
			
			start = mid + 1;
			
		}
		mid = start + (end - start) / 2;
	}
	return ans;
}

int main(){
    int n = 7; // Number of Books
    int m = 5; // Number of Student
    int arr[] = {15 ,10 ,19, 10, 5, 18, 7};

    cout << "Maximum number of pages assign to a Student is minimum :-  " << bookAllocation(arr, n, m ) << endl;

    return 0;

}


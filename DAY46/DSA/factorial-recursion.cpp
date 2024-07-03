#include<iostream>
using namespace std;

int factorial(int n){

    // Base Case 
    if(n == 0)
    return 1;

    // int smallerProblem = factorial(n - 1);
    // int largerProblem = n * smallerProblem;
    // return largerProblem;

    // Iske Place pe sirf ye likh do 

    return n * factorial(n - 1);

}

int main(){

    int n;
    cout << "Enter the Value of n :- " << endl;
    cin >> n;
    int ans = factorial(n);
    cout << "The factorial of " << n << " is :- " << ans << endl;
    return 0;
}
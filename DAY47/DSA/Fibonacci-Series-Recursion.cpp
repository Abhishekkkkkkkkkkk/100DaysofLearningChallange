#include<iostream>
using namespace std;

int fib(int n) {
        
    // Base Case
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;

    // Recursive Relation
    return fib(n - 1) + fib(n - 2);         
}
int main(){
    int n;
    cout << "Enter the Value of n :- " << endl;
    cin>>n;

    int result = fib(n);
    cout << "The Value of fib(" << n << ") is :- " << result << endl;

    return 0;
}
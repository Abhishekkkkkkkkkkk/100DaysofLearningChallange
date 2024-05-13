#include<iostream>
using namespace std;

int factorial(int n){

    int factorial = 1;
    for(int i = 1; i <= n; i++){
        factorial = factorial * i;
    }
    return factorial;
}

int nCr(int n , int r) {

    int numerator = factorial(n);
    int denominator = factorial(r) * factorial(n - r);
    int ans = numerator / denominator;
}


int main(){
    
    int n , r;
    cin >> n >>r ;
    cout << "nCr of : " << n <<" and " << r << " is " << nCr(n , r);
    return 0;
    

    
}
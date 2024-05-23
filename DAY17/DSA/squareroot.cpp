#include<iostream>
using namespace std;

long long int squareRoot(int n){
        int s = 0; 
        int e = n;

long long int mid = s + (e -s) / 2 ;
long long int ans = -1;

    while(s <= e){

        long long int square = mid *mid;

        if(square == n)
        return mid;

         if(square < n){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid -1;
        }
       
       mid = s + (e -s) / 2 ;
    }
    return ans;
}

// To find whole square root that means till decimal value 

double actualAnswer(int n, int precision, int integerSol) {
    
    double factor = 1;
    double ans = integerSol;

    for(int i=0; i<precision; i++) {
        factor = factor/10;

        for(double j=ans; j*j<n; j= j+factor ){
            ans = j;
        }
    }
    return ans;
}

int main() {

int n ;
cout <<"Enter the value of n : " <<endl;
cin >>n;
int integerSol = squareRoot(n);
// cout << "The integer part square root of n is :- " << integerSol << endl;

cout << "The actual square root of n is :- " << actualAnswer(n, 4, integerSol) <<endl;

}
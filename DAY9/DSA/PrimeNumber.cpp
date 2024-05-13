#include<iostream>
using namespace std;

bool isPrime(int n){
    for(int i = 2; i < n; i++){
        //if number is not prime
        if(n % i == 0 ){
            return 0;
        }
        
    }
    //if number is prime
    return 1;
}

int main(){
    int n;
    cin >>n;
    

   if( isPrime(n) ) {
    cout << "Given Number is Prime Number.";
   }
   else{
    cout << "Given Number is Not a Prime Number.";
   }
   
}
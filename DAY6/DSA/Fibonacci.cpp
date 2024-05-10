#include<iostream>
using namespace std;
int main(){
    
    int n ;
    cout << "Enter thie value of n" <<endl;
    cin >>n;

    cout << "Fibonacci number till "<<n  <<endl;

    int a = 0;
    int b = 1;

    cout << a << " " << b << " ";

    for(int i = 1; i <= n; i++){

        int NextNumber = a + b;

        cout << NextNumber << " ";

        a = b;
        b = NextNumber;
    }
}
#include<iostream>
using namespace std;
int main(){
    
    int n ;
    cout << "Enter thie value of n" <<endl;
    cin >>n;

    cout << "Printing Sum from 1 to  N" <<endl;

    int sum = 0;

    for(int i = 1; i <= n; i++){

        sum = sum +i;
        

    }
cout << sum <<endl;
}
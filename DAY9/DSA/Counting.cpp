#include<iostream>
using namespace std;

int Counting(int n){
    int number = 1;

    while(number <= n){
        cout << number <<endl;
        number++;
    }
}

int main(){
    int n;
    cin >>n;
    cout << "The Counting from 1 to " <<n << " is : " <<endl;
    Counting(n);
    return 0;
   
}
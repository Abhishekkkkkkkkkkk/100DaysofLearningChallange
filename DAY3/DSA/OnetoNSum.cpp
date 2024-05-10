#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of N :- " <<endl;
    cin >>n;

    int sum = 0;
    int i = 1;

    while(i <= n){
        sum = sum+i;
        i = i+1;
    }
    cout <<"The value of sum is "<< sum <<endl;
}
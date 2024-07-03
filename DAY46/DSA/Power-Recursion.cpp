#include<iostream>
using namespace std;

int power(int n){

    // Base Case 
    if(n == 0)
    return 1;

    // Recursiove Relation

    return 2 * power(n - 1);

}

int main(){

    int n;
    cout << "Enter the Value of n :- " << endl;
    cin >> n;
    int ans = power(n);
    cout << "2 to the Power " << n << " is :- " << ans << endl;
    return 0;
}
#include<iostream>
using namespace std;

void print(int n){

    // Base Case 
    if(n == 0)
    return ;

    // Recursiove Relation
    print(n - 1);

    // Processing
    cout << n << endl;

}

int main(){

    int n;
    cout << "Enter the Value of n :- " << endl;
    cin >> n;
    cout << "Counting Till " << n << " is :- " << endl;
    print(n);
    return 0;
}
#include<iostream>
using namespace std;

int stairCount(int n) {
        
    // Base Case
    if(n < 0)
    return 0;
    if(n == 0)
    return 1;
    
    // Recursive Relation
    return stairCount(n - 1) + stairCount(n - 2);      
}

int main(){
    int n;
    cout << "Enter the Value of n :- " << endl;
    cin>>n;

    int result = stairCount(n);
    cout << " The number of distinct ways that can be climbed from the 0th step to the Nth step is :- " << result << endl;

    return 0;
}
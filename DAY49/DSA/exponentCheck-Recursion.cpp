#include<bits/stdc++.h>
using namespace std;

int power(int a, int b){

    // Base Case 
    if(b == 0){
        return 1;
    }
    if(b == 1){
        return a;
    }

    // Recursive Call 
    int ans = power(a, b/2);

    // if b is even 
    if(b%2 == 0){
        return ans*ans;
    }
    else{
        // if b is odd 
        return a*ans*ans;
    }
}


int main() {

    int a, b;
    cout << "Enter value of a :- " << endl;
    cin >> a;
    cout << "Enter value of b :- " << endl;
    cin >> b;

    int ans = power(a,b);

    cout << "Answer is :- " << ans << endl;
    

    return 0;
}

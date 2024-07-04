#include<iostream>
using namespace std;

void sayDigit(int n, string str[]){

    // Base Case 
    if(n==0){
        return ;
    }

    // Processing 
    int digit = n%10;
    n = n / 10;

    // Recursive Call
    sayDigit(n, str);

    cout<< str[digit] << " ";
}

int main(){

    string str[10] = {"ZERO", "ONE", "TWO", "THREE", "FOUR", "FIVE", "SIX", "SEVEN", "EIGHT", "NINE"};

    int n;
    cout << "Enter the Value of n :- " << endl;
    cin >> n;
    
    sayDigit(n, str);
     
}
#include<iostream>
using namespace std;

// void func(int a, int b){

//     a++;
//     b++;
//     cout << "a is :- = " << a << endl;
//     cout << "b is :- = " << b << endl;
// }

// int getMax(int a, int b){
//     return (a > b) ? a : b;
// }

// REFERNCE VARIABLE USE KAR LO New Storage hone se Bachane ke liye
// int getMax(int& a, int& b){
//     return (a > b) ? a : b;
// }

// Ab Function Call bhi na jaye us se bachane ke liye -- inine function banana padega 

// Benifits :- No Exta memory usages and no function call overhead 
inline int getMax(int& a, int& b){
    return (a > b) ? a : b;
}

int main(){

    // int a = 5, b = 10;
    // func(a, b);

    int a = 2, b = 3;

    int ans = 0;

    // ans = (a > b) ? a : b; // ternary operator
    ans = getMax(a, b);
    cout << "ans is :- = " << ans << endl;

    a = a + 3;
    b = b + 3;

    // ans = (a > b) ? a : b;

    // Agar ye cheze baar baar karna pade to is se aacha hai ki function bana lo  --  line 12

    ans = getMax(a, b);
    cout << "ans is :- = " << ans << endl;

    return 0;
}
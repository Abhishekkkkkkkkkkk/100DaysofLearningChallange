#include<iostream>
using namespace std;

int main(){
    // int num = 5;
    // cout << num << endl;
    // cout <<"Address of num is :- " << &num << endl;

    // int *ptr = &num;
    // cout << "Value is :- " << *ptr << endl; 
    // cout << "Addrss is :- " << ptr << endl; 


    // double d = 4.3;
    // double *p2 = &d;
    // cout << "Value is :- " << *p2 << endl; 
    // cout << "Addrss is :- " << p2 << endl;

    // cout << "Size of Integer is :- " << sizeof(num) << endl;
    // cout << "Size of Pointer ptr is :- " << sizeof(ptr) << endl;
    // cout << "Size of Pointer p2 is :- " << sizeof(p2) << endl;


    // int *p;
    // cout << "Value of p is :- " << p << endl; // garbage value

    // int *p = 0;
    // cout << *p << endl;  // Segmentation Fault


    // pointer Initialization


/*
    int i = 5;

// Method 1
    int *q = &i;
    cout << q << endl;
    cout << *q << endl;

// Method 2
    int *p = 0;
    p = &i;

    cout << p << endl;
    cout << *p << endl;

*/

// int num = 10;

// int a = num;
// cout <<"a Before: " << num << endl;
// a++;
// cout <<"a After: " << num << endl;

// int *p = &num;
// cout <<"Before: " << num << endl;
// (*p)++;
// cout <<"After: " << num << endl;


// Copying a Pointer 

// int *q = p;
// cout <<"Address of p and q is :-  " << p << " and " << q << endl;
// cout <<"Value of p and q is :-  " << *p << " and " << *q << endl;


// Important Concept 

int i = 3;

int *t = &i;

*t = *t + 1;

cout << *t << endl;

cout <<"Before t: " << t << endl;
t = t + 1;
cout <<"After t: " << t << endl;




    return 0;
}
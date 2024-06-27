#include<iostream>
using namespace std;

void update(int **p2){
    // p2 = p2 + 1;     // No Change
    // *p2 = *p2 + 1;   // Change in p1 only
    **p2 = **p2 + 1;    // Change in i only
}
int main(){

    int i = 5;
    int* p1 = &i;
    int** p2 = &p1;

    cout << "Sab Sahi Chal rha hai " << endl;

    // cout << "Printing P1 " << p1 << endl;
    // cout << "Address of p1 " << &p1 << endl;

    /*

    cout << &i << endl;
    cout << p1 << endl;
    cout << *p2 << endl;


    cout << i << endl;
    cout << *p1 << endl;
    cout << **p2 << endl;


    cout << &p1 << endl;
    cout << p2 << endl;

    */

    // Using Double Pointer With Functions
    cout << endl;
    cout << "Before i :- " << i << endl;
    cout << "Before p1 :- " << p1 << endl;
    cout << "Before p2 :- " << p2 << endl;
    update(p2);
    cout << "After i :- " << i << endl;
    cout << "After p1 :- " << p1 << endl;
    cout << "After p2 :- " << p2 << endl;
    cout << endl;

    return 0;
}
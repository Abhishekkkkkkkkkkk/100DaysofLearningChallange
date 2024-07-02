#include<iostream>
using namespace std;

// Creating a Macro 
#define PI 3.14

int main(){

    int r = 5;
    // double pi = 3.14;
    double Area = PI * r * r;

    cout << "Area of Circle is :- " << Area << endl;

    return 0;
}
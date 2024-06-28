#include<iostream>
using namespace std;

// Ye Bad Practice hai Ye Na Kare to hi Aacha hai 
// int& func(int a){
//     int num = a;
//     int& ans = num;
//     return ans;
// }
// int* fun(int n){
//     int* ptr = &n;
//     return ptr;
// }

// Pass By Reference - Actual Change hoga 
void update2(int& n){
    n++;
}

// Pass By Value - Copy Create hoga 
void update1(int n){
    n++;
}
int main(){
      
    int i = 10;
    

    /*
    // Creating a Reference Variable 
    int &j = i;

    cout << i << endl;
    i++;
    cout << i << endl;
    j++;
    cout << i << endl;
    */
    cout << "Before update 1 "<< i << endl;
    update1(i);
    cout << "After update 1 "<< i << endl;

    cout << "Before update 2 "<< i << endl;
    update2(i);
    cout << "After update 2 "<< i << endl;
    

    // int n = 5;
    // fun(n);
    
    return 0;
}
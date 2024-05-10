#include<iostream>
using namespace std;
int main(){
    int a = 4;
    int b = 6;
    cout << "a & b " << (a&b) << endl;
    cout << "a | b " << (a|b) << endl;
    cout << "a ^ b " << (a^b) << endl;
    cout << "~ b " << ~a << endl;

    cout << (17 >> 1) <<endl;
    cout << (17 >> 2) <<endl;
    cout << (21 << 1) <<endl;
    cout << (21 << 2) <<endl;

    int i = 7;

    cout << (i++) <<endl;
    cout << (++i) <<endl;
    cout << (i--) <<endl;
    cout << (--i) <<endl;

    int p , q =1;

    p = 10;
    if(++p){
        cout <<q;
    }else{
        cout << ++q;
    }

}
    
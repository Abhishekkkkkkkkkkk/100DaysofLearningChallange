#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    int a;
    int b;


    public:
    int add(){
        return a+b; 
    }

    // operator Overloading 

    void operator+ (A &obj){
        int value1 = this -> a;
        int value2 = obj.a;
        cout << "OUTPUT :-  " << value2 - value1 << endl;
    }

    void operator() (){
        cout << "I am Bracket  "<< endl;
    }
    
};

int main(){

    A obj1, obj2;

    obj1.a = 10;
    obj2.a = 20;

    obj1 + obj2;

    obj1();
     
    return 0;
}
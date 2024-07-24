#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    void func1(){
        cout<<"Inside Function 1"<<endl;
    }
};

class B: public A{
    public:
    void func2(){
        cout<<"Inside Function 2"<<endl;
    }
};

class C: public A{
    public:
    void func3(){
        cout<<"Inside Function 3"<<endl;
    }
};

int main(){

    A obj1;
    obj1.func1();

    B obj2;
    obj2.func1();
    obj2.func2();

    C obj3;
    obj3.func1();
    obj3.func3();
    
    return 0;
}
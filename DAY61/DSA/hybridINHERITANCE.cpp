#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    void func1(){
        cout<<"Inside Function 1 - A"<<endl;
    }
};

class D{
    public:
    void func4(){
        cout<<"Inside Function 4 - D"<<endl;
    }
};

class B: public A{
    public:
    void func2(){
        cout<<"Inside Function 2 - B"<<endl;
    }
};

class C: public A, public D{
    public:
    void func3(){
        cout<<"Inside Function 3 - C"<<endl;
    }
};

int main(){

    A obj1;
    obj1.func1();

    D obj2;
    obj2.func4();

    B obj3;
    obj3.func1();
    obj3.func2();

    C obj4;
    obj4.func1();
    obj4.func3();
    obj4.func4();
    
    return 0;
}
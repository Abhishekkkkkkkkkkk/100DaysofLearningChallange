#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    void sayHello(){
        cout<<"Hello Abhishek"<<endl;
    }

    void sayHello(string name){
        cout<<"Hello"<< name <<endl;
    }

    int sayHello(string name, int n){
        cout<<"Hello"<< name <<endl;
        return n;
    }
};

int main(){

    A obj;
    obj.sayHello();
  
    return 0;
}
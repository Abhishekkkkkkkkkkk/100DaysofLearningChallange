#include<bits/stdc++.h>
using namespace std;

class Male{
    public:
    int weight;
    int age;

    public:
    void hobbies(){
        cout << "Singing" << endl;
    }
};

class Female{
    public:
    int color;
    int height;

    public:
    void passion(){
        cout << "Dancing " << endl;
    }
};

class Human: public Male, public Female{

};

int main(){
    Human h;
    h.hobbies();
    h.passion();

    return 0;
}
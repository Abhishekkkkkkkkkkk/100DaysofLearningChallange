#include<bits/stdc++.h>
using namespace std;

// Creating a Class 
class Hero{

    // Properties 
    public:
        int health;
        char level;
    
    private:
        void print(){
            cout<<"This is private"<<endl;
        }
};

int main(){

    // Creating an Object
    Hero Abhishek;

    Abhishek.health = 100;
    Abhishek.level = 'A';

    // Accesssing Data Member / Properties
    cout << "Health is :- " << Abhishek.health <<endl;
    cout << "Level is :- " << Abhishek.level <<endl;

    // cout << "Size of Abhishek is :- " << sizeof(Abhishek) << endl;

    return 0;
}
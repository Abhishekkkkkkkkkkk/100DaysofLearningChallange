#include<bits/stdc++.h>
using namespace std;

class Hero{

    // Properties 
    private:
        int health;
        
    
    public:
        char level;

        void print(){
            cout<<"This is private"<<endl;
        }

    int getHelth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        health = ch;
    }
};

int main(){


    Hero Abhishek;
    Abhishek.setHealth(100);
    Abhishek.level = 'A';

    // Accesssing Data Member / Properties
    cout << "Health is :- " << Abhishek.getHelth() <<endl;
    cout << "Level is :- " << Abhishek.getLevel() <<endl;

    cout << "Size of Abhishek is :- " << sizeof(Abhishek) << endl;

    return 0;
}
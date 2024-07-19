#include <bits/stdc++.h>
using namespace std;

class Hero
{

    // Properties
private:
    int health;

public:
    char level;

    // Constructor Without Parameter
    Hero()
    {
        cout << "Constructor called" << endl;
    }

    // Constructor With Parameter
    Hero(int health)
    {
        cout << "this -> " << this << endl;
        this->health = health;
    }

    Hero(int health, char level)
    {
        this->level = level;
        this->health = health;
    }

    int getHelth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(char ch)
    {
        health = ch;
    }
    void print()
    {
        cout << "Health: " << health << endl;
        cout << "Level: " << level << endl;
    }
};

int main()
{

    Hero h(10);
    // cout << "Addresh of h is :- " << &h << endl;
    // h.getHelth();
    h.print();

    // Below Both line are Same
    // Hero * abhi = new Hero;
    Hero *abhi = new Hero(11);
    abhi->print();

    Hero temp(20, 'D');
    temp.print();

    return 0;
}
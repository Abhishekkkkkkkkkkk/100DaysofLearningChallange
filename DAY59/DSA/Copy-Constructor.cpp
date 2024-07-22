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

    // Copy Constructor

    Hero(Hero &temp)
    {
        cout << "Copy Constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
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
        cout << "Health: " << this->health << endl;
        cout << "Level: " << this->level << endl;
    }
};

int main()
{

    Hero S(100, 'C');
    S.print();

    Hero R(S);
    R.print();

    return 0;
}
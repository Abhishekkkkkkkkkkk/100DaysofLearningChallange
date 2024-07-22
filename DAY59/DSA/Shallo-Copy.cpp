#include <bits/stdc++.h>
using namespace std;

class Hero
{
private:
    int health;

public:
    char *name;
    char level;

    // Constructor Without Parameter
    Hero()
    {
        cout << "Simple Constructor called" << endl;
        name = new char[100];
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
    // Hero(Hero &temp)
    // {
    //     cout << "Copy Constructor called" << endl;
    //     this->health = temp.health;
    //     this->level = temp.level;
    // }

    int getHealth()
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
        level = ch; // Corrected from health to level
    }

    void setName(char name[])
    {
        strcpy(this->name, name);
    }

    void print()
    {
        cout << endl;
        cout << "Name: " << this->name << ", ";
        cout << "Health: " << this->health << ", ";
        cout << "Level: " << this->level << " ";
        cout << endl;
    }
};

int main()
{
    Hero h1;

    h1.setHealth(100);
    h1.setLevel('D');
    char name[10] = "Abhishek";
    h1.setName(name);
    h1.print();

    // Hero h2(h1);
    Hero h2 = h1;

    h2.print();

    // Shallow Copy
    h1.name[0] = 'L';

    h1.print();
    h2.print();

    return 0;
}

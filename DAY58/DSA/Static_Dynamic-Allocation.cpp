#include <bits/stdc++.h>
using namespace std;

// Creating a Class
class Hero
{

    // Properties
public:
    int health;
    char level;
};

int main()
{

    // Static Allocation
    Hero Abhishek;

    Abhishek.health = 100;
    Abhishek.level = 'A';

    cout << "Accesssing Data Member in Static Allocation" << endl;
    cout << "Health is :- " << Abhishek.health << endl;
    cout << "Level is :- " << Abhishek.level << endl;
    cout << endl;

    // Dynamic Allocation
    Hero *h = new Hero;
    h->health = 200;
    h->level = 'B';

    cout << "Accesssing Data Member in Dynamic Allocation - Method 1" << endl;
    cout << "Health is :- " << (*h).health << endl;
    cout << "Level is :- " << (*h).level << endl;

    cout << "Accesssing Data Member in Dynamic Allocation - Method 2" << endl;
    cout << "Health is :- " << h->health << endl;
    cout << "Level is :- " << h->level << endl;

    return 0;
}
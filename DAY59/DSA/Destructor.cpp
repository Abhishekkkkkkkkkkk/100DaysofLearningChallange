#include <bits/stdc++.h>
using namespace std;

class Hero
{
private:
    int health;

public:
    char *name;
    char level;

    // Static Keyword
    static int timetoComplete;

    // Constructor Without Parameter
    Hero()
    {
        cout << "Simple Constructor called" << endl;
        name = new char[100];
    }

    // Dastructor
    ~Hero()
    {
        cout << "Dastructor called" << endl;
    }

    // Static Function
    static int random()
    {
        return timetoComplete;
    }
};

// Initializing Static Keyword
int Hero::timetoComplete = 5;

int main()
{

    // Accessing Static Keyword
    cout << Hero::timetoComplete << endl;

    // We can also access static keyword in this way but this in not the best way

    // Hero a;
    // cout << a.timetoComplete << endl;

    // Hero b;
    // b.timetoComplete = 10;
    // cout << a.timetoComplete << endl;
    // cout << b.timetoComplete << endl;

    // Accessing static Function
    cout << Hero::random() << endl;

    // Destructor

    // Statically
    // Hero h1;

    // Dynamically
    // Hero *h2 = new Hero();

    // Manually Call Dynamically Called Destructor
    // delete h2;

    return 0;
}

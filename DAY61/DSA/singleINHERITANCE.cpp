#include <bits/stdc++.h>
using namespace std;

class Animal
{
public:
    int weight;
    int age;

public:
    void speak()
    {
        cout << "SPaeaking " << endl;
    }
};

class Dog : public Animal
{
public:
    int height;
};

int main()
{

    Dog d;
    d.speak();

    return 0;
}
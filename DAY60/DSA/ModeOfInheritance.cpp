// Public, Public = Public
// Public, Protected = Protected
// Public, Private = Private
// Protected, Public = Protected
// Protected, Protected = Protected
// Protected, Private = Private
// Private data member of any class can not be inherited

#include <bits/stdc++.h>
using namespace std;

class Human
{

protected:
    int height;
    int weight;
    int age;

public:
    int getAge()
    {
        return this->age;
    }
    void setWeight(int w)
    {
        this->weight = w;
    }
};

class Male : protected Human
{
public:
    string color;

public:
    void sleep()
    {
        cout << "Male is sleeping" << endl;
    };

    int getHeight()
    {
        return this->height;
    }
};

int main()
{

    Male m1;

    cout << m1.getHeight() << endl;

    return 0;
}
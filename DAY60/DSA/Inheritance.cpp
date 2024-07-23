#include <bits/stdc++.h>
using namespace std;

class Human
{

public:
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

class Male : public Human
{
public:
    string color;

public:
    void sleep()
    {
        cout << "Male is sleeping" << endl;
    };
};

int main()
{

    Male m1;

    cout << m1.height << endl;
    cout << m1.weight << endl;
    cout << m1.age << endl;

    cout << m1.color << endl;

    m1.sleep();

    m1.setWeight(30);
    cout << m1.weight << endl;

    return 0;
}
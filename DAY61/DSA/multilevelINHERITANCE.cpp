#include <bits/stdc++.h>
using namespace std;

class Human
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

class Male : public Human
{

public:
    void height()
    {
        cout << "Height is 3 " << endl;
    }
};

class Abhishek : public Male
{
};

int main()
{

    Abhishek a1;
    a1.speak();
    a1.height();

    return 0;
}
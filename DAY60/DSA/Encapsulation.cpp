#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
    string name;
    int age;
    int height;

public:
    int getAge()
    {
        return this->age;
    }
};

int main()
{

    Student first;
    cout << "This is called Encapsulation " << endl;
    
    return 0;
}
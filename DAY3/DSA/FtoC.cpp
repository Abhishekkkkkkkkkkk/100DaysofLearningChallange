#include <iostream>
using namespace std;
int main()
{
    int F;
    float C;
    cout << "Enter the value of Fahrenheit :- " << endl;
    cin >>F;

    C = (F - 32) * 5/9;

    cout << "Celcius of given Fahrenheit " << F << " is " << C <<endl;
}
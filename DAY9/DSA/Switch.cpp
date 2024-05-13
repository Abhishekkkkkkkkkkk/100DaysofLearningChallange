#include<iostream>
using namespace std;
int main() {
    int num = 1;
    char ch = '2';
    cout << endl;
    switch(num){
        case 1: cout<< "First" << endl;
        break;

        case '1': cout<< "Character One" << endl;
        break;

        case '2': switch (num)
        {
        case 2: cout << "The value of Num is : " << num <<endl;
            break;
        }
        break;

        default: cout<< "This is a Default case." << endl;
    }
    cout << endl;

}
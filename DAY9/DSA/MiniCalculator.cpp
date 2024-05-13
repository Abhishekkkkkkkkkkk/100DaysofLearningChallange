#include<iostream>
using namespace std;
int main() {
    int num;
    cout <<  "Enter Your Choice :-  (1-Addition), (2-Subtraction), (3-Multipliction), (4-Division), (5-Modulus) : " <<endl;
    cin >> num;
    int a, b ;
    cout << "Enter the value of a : " <<endl;
    cin >>a;
    cout << "Enter the value of b : " <<endl;
    cin >>b;

    switch(num){
        case 1: cout<< "The Addition is : " << a+b << endl;
        break;

        case 2: cout<< "The Subtraction is : " << a-b << endl;
        break;

        case 3: cout<< "The Multipliction is : " << a*b << endl;
        break;

        case 4: cout<< "The Division is : " << a/b << endl;
        break;

        case 5: cout<< "The Modulus is : " << a%b << endl;
        break;

        default: cout<< "This is a Default case." << endl;
    }
    cout << endl;

}
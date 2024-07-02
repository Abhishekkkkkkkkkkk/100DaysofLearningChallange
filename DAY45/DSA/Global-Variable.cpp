#include<iostream>
using namespace std;

int score = 10;

void a(int& i ){

    cout << "Score in a :- " << score << endl;
    cout << i << endl;
}

void b(int& i ){
    cout << "Score in b :- " << score << endl;
    cout << i << endl;
}

int main(){

    cout << "Score in main :- " << score << endl;

    int i = 5;
    
    
    a(i);
    b(i);
    
    return 0;
}
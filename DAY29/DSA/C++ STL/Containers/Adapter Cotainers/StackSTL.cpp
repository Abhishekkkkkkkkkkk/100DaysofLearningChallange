#include<iostream>
#include<stack>
using namespace std;

int main() {

    stack<string> s;

    s.push("Abhi");
    s.push("Shek");
    s.push("Kumar");

    cout<<"Top Element :- "<<s.top()<<endl;

    s.pop();

    cout<<"After Pop Top Element :- "<<s.top()<<endl;

    cout<<"Size of the Stack "<<s.size()<<endl;

    cout<<"Empty or Not :- "<<s.empty()<<endl;


}
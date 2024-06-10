#include<iostream>
#include<queue>
using namespace std;

int main() {

    queue<string> q;

    q.push("Abhi");
    q.push("Shek");
    q.push("Kumar");

    cout<<"Size of the Stack before pop "<<q.size()<<endl;

    cout<<"First Element :- "<<q.front()<<endl;

    q.pop();

    cout<<"After Pop First Element :- "<<q.front()<<endl;

    cout<<"Size of the Stack after pop "<<q.size()<<endl;

    cout<<"Empty or Not :- "<<q.empty()<<endl;


}
#include<bits/stdc++.h>
using namespace std;

int main() {

    queue<int> q;

    // Push Operation 
    q.push(1);
    q.push(2);
    q.push(7);
    q.push(5);
    q.push(3);

    // find front element 
    cout << "Front element is " << q.front() << endl;

    // find back element 
    cout << "Back element is " << q.back() << endl;
    
    // find size of queue 
    cout << "Size of Queue is :- " << q.size() << endl; 

    // Pop operation 
    q.pop();
    q.pop();
    cout << "Size of Queue is :- " << q.size() << endl;

    // Empty or Not 
    if(q.empty()){
        cout << "Queue is Empty" << endl;
    }
    else{
        cout << "Queue is not Empty" << endl;
    }
    
    return 0;
}
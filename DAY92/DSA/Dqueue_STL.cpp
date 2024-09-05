#include<bits/stdc++.h>
using namespace std;


int main(){

    deque<int> d;

    // push Front
    d.push_front(10);
    d.push_front(20);

    // Push Back 
    d.push_back(30);
    d.push_back(40);

    cout << "Front Element is :- " << d.front() <<endl;
    cout << "Back Element is :- " << d.back() <<endl;


    // Pop Front 
    d.pop_front();
    d.pop_front();
    d.pop_front();

    // Pop Back 
    d.pop_back();

    cout << "Front Element is :- " << d.front() <<endl;
    cout << "Back Element is :- " << d.back() <<endl;

    // Check empty 
    if(d.empty()){
        cout << "Deque is empty" <<endl;
    }
    else{
        cout << "Deque is not empty" <<endl;
    }

    return 0;
}
#include<iostream>
#include<deque>
using namespace std;

int main() {
    deque<int> d;

// push from back 
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);

// push from front 
    d.push_front(6);
    d.push_front(7);
    d.push_front(8);
    d.push_front(9);

     // Element at given index 
    cout<<"Element at index 1 is :- "<<d.at(1)<<endl;

// Before Pop 
    for(int i:d){
        cout << i <<endl;
    }

    d.pop_back();
    d.pop_front();

// After Pop 
    for(int i:d){
        cout << i <<endl;
    }

    // Empty or Not 
    cout<<"Empty or Not  :- "<<d.empty()<<endl;


    // Before Erase 

    cout<<"Before Erase "<<endl;
    for(int i:d){
        cout << i <<endl;
    }

    d.erase(d.begin(), d.begin()+2);

// After Erase

cout<<"After Erase "<<endl;

    for(int i:d){
        cout << i <<endl;
    }


    //  Check size 
    cout <<"Size of array is :- "<< d.size() <<endl;  
    
}
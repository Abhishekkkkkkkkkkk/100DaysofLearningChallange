#include<iostream>
#include<list>
using namespace std;

int main() {

    list<int> l;

    list<int> n(5, 100);

     cout<<"Printing n :- "<<endl;
     for(int i:n){
        cout << i <<endl;
    }


// push from back 
    l.push_back(1);
    l.push_back(2);
    

// push from front 
    l.push_front(6);
    l.push_front(7);

// Before Pop 
    for(int i:l){
        cout << i <<endl;
    }

    l.pop_back();
    l.pop_front();

// After Pop 
    for(int i:l){
        cout << i <<endl;
    }

    // Empty or Not 
    cout<<"Empty or Not  :- "<<l.empty()<<endl;


    // Before Erase 

    cout<<"Before Erase "<<endl;
    for(int i:l){
        cout << i <<endl;
    }

    l.erase(l.begin());

// After Erase

cout<<"After Erase "<<endl;

    for(int i:l){
        cout << i <<endl;
    }


    //  Check size 
    cout <<"Size of array is :- "<< l.size() <<endl;  
    
}
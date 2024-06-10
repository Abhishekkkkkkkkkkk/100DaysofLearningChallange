#include<iostream>
#include<vector>
using namespace std;

int main(){

    // Creating Vector 
    vector<int> v;
    
    // Check Capacity of Vector 
    cout<<"Capacity " <<v.capacity()<<endl;

    // Check Size of Vector 
    cout<<"Size " <<v.size()<<endl;
    
    // Push Elements to the Vector 
    v.push_back(1);
    cout<<"Capacity " <<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity " <<v.capacity()<<endl;
    cout<<"Size " <<v.size()<<endl;

    v.push_back(3);
    cout<<"Capacity " <<v.capacity()<<endl;
    cout<<"Size " <<v.size()<<endl;

    // Element at Given Index
    cout<<"The Element at 2nd Index :- "<<v.at(2) <<endl;
     
    // First Element
    cout<<"The First Element of Given Array is :- "<<v.front() <<endl;

    // Last Element 
    cout<<"The Last Element of Given Array is :- "<<v.back() <<endl;


    cout<<"Before Pop " <<endl;
    for(int i:v){
        cout<<i <<" "<<endl;
    }

    // Pop an element form vector 

    v.pop_back();

    cout<<"After Pop " <<endl;
    for(int i:v){
        cout<<i <<" "<<endl;
    }

   cout<<"Before Clear the size:- " << v.size()<<endl;

//    clear the size of vector 
   v.clear();

   cout<<"After Clear the size:- " << v.size()<<endl;


   vector<int> a(5, 1);
//    cout<<"Printing the vector a:-  " <<endl;
//     for(int i:a){
//         cout<<i <<" "<<endl;
//     }

    vector<int> last(a);
    cout<<"Printing the vector last:-  " <<endl;
    for(int i:last){
        cout<<i <<" "<<endl;
    }

}
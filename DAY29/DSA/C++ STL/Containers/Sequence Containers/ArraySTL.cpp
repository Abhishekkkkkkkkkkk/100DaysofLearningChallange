#include<iostream>
#include<array>
using namespace std;

int main(){
     
     int BasicArr[4] = {1, 2, 3, 4};

    //  Array Decleration
    array<int, 4> stlArr = {1, 2, 3, 4};

    // Find Size 
    int size = stlArr.size();

     cout<<"The Size of Array is :- "<<size <<endl;

     for(int i = 0; i<size; i++){
        cout<<"The Index Wise element of Given Array is :- "<<stlArr[i] <<endl;
     }

    // Element at Given Index
    cout<<"The Element at 2nd Index :- "<<stlArr.at(2) <<endl;

    // Array is Empty or Not
    cout<<"The Given Array is Empty or Not ? :- "<<stlArr.empty() <<endl;
     
    // First Element
    cout<<"The First Element of Given Array is :- "<<stlArr.front() <<endl;

    // Last Element 
    cout<<"The Last Element of Given Array is :- "<<stlArr.back() <<endl;
}
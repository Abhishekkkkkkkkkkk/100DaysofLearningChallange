#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(9);

    // Binary Search 
    cout<<"Finding 5 using Binary Search "<<binary_search(v.begin(), v.end(), 5)<<endl;

    // Lower Bound 
    cout<<"Lower Bound of 7 is :- "<<lower_bound(v.begin(), v.end(), 7) - v.begin() <<endl;

    // Upper Bound
    cout<<"Upper Bound of 3 is :- "<<upper_bound(v.begin(), v.end(), 3) - v.begin() <<endl; 

    int a = 5;
    int b = 3;

    // minimum 
    cout<<"Minimum of a and b is :- "<< min(a,b) <<endl;

    // maximum 
    cout<<"Maximum of a and b is :- "<< max(a,b) <<endl;

    // Swap 
    swap(a,b);

    cout<<"After Swap a is :- "<< a <<endl;
    cout<<"After Swap b is :- "<< b <<endl;

    // Reverse 
    string str = "abcd";
    reverse(str.begin(), str.end());
    cout<<"Reverse of str is :- "<< str <<endl;

    // Rotate 
    rotate(v.begin(), v.begin()+1, v.end());
    cout<<"After Rotate given Vector is :- " <<endl;
    for(int i : v){
        cout<< i <<" ";
    }
    
    cout<<endl;

    // Sort 
    sort(v.begin(), v.end());
    cout<<"After Sorting given Vector is :- " <<endl;
    for(int i : v){
        cout<< i <<" ";
    }

}
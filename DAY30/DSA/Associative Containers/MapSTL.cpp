#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int, string> m;
// Insert elemnt in set 
    m[1] = "Abhishek";
    m[2] = "Aman";
    m[13] = "Chaman";

    m.insert({5, "Anurag"});

    // Element present or not 
    cout<<"5 is present or not? "<<m.count(5)<<endl;

    cout<<"Before Erase "<<endl;
    for(auto i : m){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;

    // Remove an element 
    m.erase(13);

    cout<<"After Erase "<<endl;
    for(auto i : m){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;

    auto it = m.find(5);
    for(auto i = it; i!=m.end(); i++){
        cout<<(*i).first<<endl;
    }

    // Find Size 
    cout<<"Size of set is "<<m.size()<<endl;

}

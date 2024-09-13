#include<bits/stdc++.h>
using namespace std;

int main(){

    // Creation of Hashmap 
    unordered_map<string, int> m;

    // Insertion method 

    // Method1
    pair<string, int> p = make_pair("abhishek", 3);
    m.insert(p);

    // Method2
    pair<string, int> pair2("Hello", 3);
    m.insert(pair2);

    // Method3
    m["Hii"] = 2;

    // Again let's suppose if we write m["Hii"] = 4 then it will updated to m["Hii"] = 6

    // Searching
    // Method1
    cout << m["Hii"] << endl;
    // Method2
    cout << m.at("abhishek") << endl;

    // cout << m.at("unknownkey") << endl; 
    // if we write the above line first then error comes 
    // because the key is not present in the map so it will throw an exception
    // But if we write this below line first
    cout << m["unknownkey"] << endl;
    // then it will print 0 because the default value is 0

    cout << m.at("unknownkey") << endl; 


    // Size 
    cout << m.size() << endl;

    // To check Presence
    cout << m.count("abhishek") << endl;
    cout << m.count("abhi") << endl;

    // Remove / Erase 
    m.erase("abhishek");
    cout << m.size() << endl;

    // Traverse without using iterator
    for(auto i: m){
        cout << i.first << " " << i.second << endl;
    }

    // Traverse using iterator
    unordered_map<string, int> :: iterator it = m.begin();
    while(it != m.end()){
        cout << it->first << " " << it->second << endl;
        it++;
    }

    return 0;
}
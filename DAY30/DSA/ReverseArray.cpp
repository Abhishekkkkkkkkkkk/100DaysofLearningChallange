#include<iostream>
#include<vector>
using namespace std;

vector<int> reverseFun(vector<int> v){
    int s = 0;
    int e = v.size() - 1;

    while(s <= e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}

void printAns(vector<int> v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main(){

    vector<int> v;

    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);

    vector<int> ans = reverseFun(v);

    cout<<"Printing the Reverse Array "<<endl;

    printAns(ans);

    return 0;


}
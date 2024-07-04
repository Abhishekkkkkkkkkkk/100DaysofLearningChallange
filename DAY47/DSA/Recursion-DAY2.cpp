#include<iostream>
using namespace std;

void reachHome(int src, int dest){

    cout << "Source is :- "<< src << " and Destination is :- " << dest << endl;
    // Base Case 
    if(src == dest){
        cout << "Reached Home - Because Source and Destination is Equal " << endl;
        return ;
    }

    // Processing  -  1 step aage bdthe jao
    src++;

    // Recursive Relation 
    reachHome(src, dest);

}
int main(){
    int src = 1;
    int dest = 10;

    cout << endl; 
    reachHome(src, dest);

    return 0;
}
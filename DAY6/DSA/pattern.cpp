#include<bits/stdc++.h>
using namespace std;

//Your code here
void printPattern(int n){
    int row = 1;
    while(row <= n){
        int cnt = 0;
        for(int j = n, num = n; j <= (n-cnt) ; j--) {
            for(int k = 1; k <= n*(n-cnt); k++){
                cout << num << " ";
            }
            cnt++;
            num--;
        }
        cout << endl;
        row++;
    }
}

int main() {

    printPattern(3);
    return 0;
}
#include<iostream>
using namespace std;


// method1

// int EvenOdd(int num){
//     if(num % 2 == 0){
//         cout << "Given Number is Even "<<endl;
//     }else{
//         cout << "Given Number is Odd "<<endl;
//     }  

// }

// int main (){
//     int a;
//     cin >> a;

//     EvenOdd(a);    
// }


// method 2

bool isEven(int num){
    //odd
    if(num & 1){
        return 0;
    }
    return 1;
}
int main(){
    int a;
    cin >> a;
    if(isEven(a)){
        cout << "Given Number is Even "<<endl;
    }else{
        cout << "Given Number is Odd "<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;

// Lower Case Conversion 

char toLowerCase(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

// Check Palindrome 
bool chekPalindrome(char a[], int n){
    int s = 0;
    int e = n - 1;

    while(s <= e){
        if(a[s] != a[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
        return 1;
    }
}

// Reverse String 
void reverse(char name[], int n){

    int s = 0;
    int e = n-1;

    while(s < e){
        swap(name[s++], name[e--]);
    }
}

// Length of a string 
int getLength(char name[]){

    int count = 0;

    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}
int main(){

    char name[20];
    
    cout<<"Enter Your Name :- "<<endl;
    cin >>name;
    // name[2] = '\0'; // Null Character
    
    cout<<"Your Name is :- ";
    cout<<name <<endl;

    int length = getLength(name);

    cout<<"Your Name Length is :- "<< length <<endl;

    reverse(name, length);
    cout<<"Your Reverse Name is :- ";
    cout<< name <<endl;

    cout<<"Palindrome or Not :- "<< chekPalindrome(name, length) <<endl;

    cout<<"Lower case of Character is "<< toLowerCase('c')<<endl;
    cout<<"Lower case of Character is "<< toLowerCase('C')<<endl;

    return 0;
}
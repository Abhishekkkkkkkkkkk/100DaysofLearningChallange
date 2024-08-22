#include<bits/stdc++.h>
using namespace std;

class Stack{
    // Property
    public:
        int top;
        int *arr;
        int size;
    
    // Behavior
    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }
    // Push Operation 
    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout << "Stack Overflow" << endl;
        }
    }

    // Pop Operation
    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout << "Stack Underflow" << endl;
        }
    }

    // Find Peek Element 
    int peek(){
        if(top >= 0){
            return arr[top];
        }
        else{
            cout << "Stack is Empty" << endl;
            return -1;
        }
    }

    // Check Stack Empty or Not 
    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }  
};

int main(){

    Stack st(5);

    // Push element in Stack 
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    st.pop();
    cout << "Top Element :- " << st.peek() << endl;
    st.pop();
    cout << "Top Element :- " << st.peek() << endl;
    st.pop();
    cout << "Top Element :- " << st.peek() << endl;


    if(st.isEmpty()){
        cout << "Stack is Empty" << endl;
    }
    else{
        cout << "Stack is not Empty" << endl;
    }



/* 
    // Stack Implementation using STL 

    // Stack Creation 
    stack<int> s;

    // Push Operation
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    // Pop Operation 
    s.pop();

    cout << "Printing the Top element :- "<< s.top()<<endl;


    // Checking empty or not 
    if(s.empty()){
        cout << "Stack is Empty"<<endl;
    }
    else{
        cout << "Stack is not Empty"<<endl;
    }

    cout << "Printing the size fo stack "<< s.size() << endl;

    cout << "Printing the element of stack :- " << endl;
    while (!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }


*/
    return 0;
}
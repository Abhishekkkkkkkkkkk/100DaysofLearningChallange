#include<bits/stdc++.h>
using namespace std;

// Node Structure of Singly Linked List
class Node{
    public:
    int data;
    Node* next;

    // Constructor 
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};


// Insert at Begining
void insertAtHead(Node* &head, int d){
    // Create a new node with the given data
    Node* temp = new Node(d);
    // Point the next of new node to current head
    temp -> next = head;
    // Change the head to new node
    head = temp;
}

// Insert at End
void insertAtTail(Node* &tail, int d){
    // Create a new node with the given data
    Node* temp = new Node(d);
    // Point the next of new node to NULL
    tail -> next = temp;
    // Change the tail to new node
    // tail = tail -> next;
    tail = temp;
}

// Insert at Specific Position 
void inserAtPosition(Node * &tail, Node * &head, int position, int d){
    // Insert at Starting Position 
    if(position == 1){
        insertAtHead(head, d);
        return ;
    }

    Node* temp = head;
    int pos = 1;

    while(pos < position - 1){
        temp = temp -> next;
        pos++;
    }

    // Insert at Last Position
    if(temp -> next == NULL){
        insertAtTail(tail, d);
        return ;
    }

    // Creating a Node for d 
    Node* nodeToInsert= new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
}

// Printing Linked List 
void print(Node * &head){
    Node *temp = head;
    while(temp != NULL){

        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){

    // Created a New Ndoe 
    Node* node1 = new Node(10);

    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;

    // Head pointed to Next 
    Node * head = node1;
    Node * tail = node1;

    print(head);
    insertAtTail(tail, 12);
    print(head);
    insertAtTail(tail, 15);

    inserAtPosition(tail, head, 4, 30);
    print(head);

    cout<< "Head:- " << head -> data << endl;
    cout<< "Tail:- " << tail -> data << endl;

    /*
    cout <<"Printing Before Insert :- "<< endl;
    print(head);
    insertAtHead(head, 12);
    insertAtHead(head, 15);
    insertAtHead(head, 20);
    cout <<"Printing After Insert :- "<< endl;
    print(head);
    */
    
    return 0;
}
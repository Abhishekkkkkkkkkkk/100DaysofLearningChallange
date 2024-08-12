#include<bits/stdc++.h>
using namespace std;

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


// Printing Linked List 
void print(Node * &head){
    Node *temp = head;
    while(temp != NULL){

        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

bool detectLoop(Node* head){
    if(head == NULL){
        return false;
    }

    map<Node*, bool> visited;
    Node* temp = head;
    while(temp != NULL){

        // Cycle is Present 
        if(visited[temp] == true){
            cout << "Cycle is present on Element :- "<< temp -> data << endl;
            return true;
        }

        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}
// Floyed Cycle Detection Algorithm Code
Node* floyedDetectLoop(Node* head){
    if(head == NULL){
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL){
        fast = fast -> next;
        if(fast != NULL){
           fast = fast -> next; 
        }
        slow = slow -> next;

        if(slow == fast){
            cout << "Cycle is present on Element :- "<< slow -> data << endl;
            return slow;
        }
    }
    return NULL;
}

// Finding Starting Position in the  Floyed Cycle 
Node* findStarting(Node* head){
    if(head == NULL){
        return NULL;
    }
    Node* intersection = floyedDetectLoop(head);
    Node* slow = head;
    while(slow != intersection){
        slow = slow -> next;
        intersection = intersection -> next;
    }
    return slow;
}

// Remove Loop 
void removeLoop(Node* head){
    if(head == NULL){
        return;
    }

    Node* startOfLoop = findStarting(head);
    Node* temp = startOfLoop;

    while(temp -> next != startOfLoop){
        temp = temp -> next;
    }
    temp -> next = NULL;
}

int main(){

    // Created a New Ndoe 
    Node* node1 = new Node(10);

    // Head pointed to Next 
    Node * head = node1;
    Node * tail = node1;

  
    insertAtTail(tail, 12);
    insertAtTail(tail, 15);
    insertAtTail(tail, 17);
    insertAtTail(tail, 19);
    insertAtTail(tail, 21);
    print(head);
    // Making list circular 
    tail -> next = head -> next;

    // if(detectLoop(head)){
    //     cout<<"Loop is present in the Linked List"<<endl;
    // }
    // else{
    //     cout<<"No Loop is present in the Linked List"<<endl;
    // }

    if(floyedDetectLoop(head) != NULL){
        cout<<"Loop is present in the Linked List"<<endl;
    }
    else{
        cout<<"No Loop is present in the Linked List"<<endl;
    }

    Node* Loop = findStarting(head);

    cout << "Loop Starts at :- "<<Loop->data<<endl;

    removeLoop(head);
    print(head);


    cout<< "Head:- " << head -> data << endl;
    cout<< "Tail:- " << tail -> data << endl;
    
    return 0;
}
#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

// constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

// destructor
    ~Node(){
        int value = this->data;
        // memory free
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout << " memeory free with data :- " << this->data << endl; 
    }
};
/*

*/

// INSERTION AT HEAD

void insertAtHead(Node * &head, int d){
    Node *node1 = new Node(d); // new node created
    node1->next = head;
    head = node1;
}

void insertAtTail(Node *&tail, int d){
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertInPosition(Node *&head, Node *&tail,  int d, int position){
    Node *temp = head;
    int cnt = 1;

// insert at start
    if(position == 1){
        insertAtHead(head, d);
        return;
    }
    // int length = 1;
    // while(temp != NULL){
    //      temp =  temp->next;
    //      length++;
    // }
    
    // if(position == length){
    //     insertAtTail(head, d);
    //     return;
    // }

    while(cnt < position-1){
        temp =  temp->next;
        cnt++;
    }
    if(temp->next == NULL){
        insertAtTail(tail, d);
        return;
    }
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;


}

// DELETING 

void nodeToDelete(Node *&head, int position){

    // delete from start node 
    if(position == 1){
        Node *temp = head;
        head = head->next;
        //memory free
        temp->next = NULL;
        delete temp;



    }
    // delete from middle or last node 
    else{
    Node *prev = NULL;
    Node * curr = head;

    int cnt = 1;
    while(cnt < position){
        prev = curr;
        curr = curr->next;
        cnt++;
    }
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;

    }

    
}

void print(Node* &head){
    Node *temp  = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;

    }
    cout << endl;
}

int main(){
    Node* node1 = new Node(10);

   // cout << node1->data << endl;
   // cout << node1->next << endl;    

    Node *head = node1;
    Node *tail = node1;

    print(head);

    insertAtHead(head, 56);
    print(head);

    insertAtHead(head, 17);
    print(head);

    insertAtTail(tail, 23);
    print(head);

    insertAtTail(tail, 33);
    print(head);

    insertInPosition(head, tail , 45, 2);
    print(head);

    insertInPosition(head, tail, 11, 1);
    print(head);

    insertInPosition(head, tail, 34, 8);
    print(head);

  

    nodeToDelete(head, 2);
    print(head);

    nodeToDelete(head, 4);
    print(head);

     nodeToDelete(head, 1);
    print(head);

     nodeToDelete(head, 5);
    print(head);

      cout<< " Head is :- " << head->data << " "<< endl ;
    cout << "Tail is :- "<< tail->data << " " << endl;


}



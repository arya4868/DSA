#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *prev;
    Node *next;

    Node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};

// PRINTING DLL
void printNode(Node *&head, Node *&tail){
    Node * temp = head;

    while(temp!= NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    cout << "Head is :- " << head->data << endl;
    cout << "Tail is :- "<<  tail->data << endl;
}

// GEETING LENGTH
int getLength(Node *&head){
    int length = 0;
    Node *temp = head;
    while(temp!= NULL){
        length++;
        temp = temp->next;
    }
    return length;
}

void insertAtHead(Node *&head,Node *&tail,  int d){

    if(head == NULL){
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }else{

    Node *temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
   
    
    }
   
}

void insertAtTail(Node* &head, Node *&tail, int d){

    if(tail == NULL){
        Node *temp = new Node(d);
        tail = temp;
        head = temp;
    }else{
    Node *temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
    }
}

void insertAtPosition(Node *&head, Node*&tail, int d, int position){
    
    // insert at first position
    if(position == 1){
        insertAtHead(head,tail,  d);
        return;
    }

    Node *temp = head;
    int cnt = 1;

    while(cnt < position-1){
        temp->next = temp;
        cnt++;
    }
    // insert at last position
    if(temp->next == NULL){
        insertAtTail(head, tail, d);
        return;
    }
    // insert at middle position
    Node *nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;

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

int main(){

    // Node *node1 = new Node(10);

    Node *head = NULL;
    Node *tail = NULL;

    // printNode(head, tail);
    int length = getLength(head);
    cout << " The length of DLL is :- " << length << endl;

    insertAtHead(head,tail, 11);
    printNode(head , tail);

    insertAtHead(head, tail,14);
    printNode(head , tail);

    insertAtHead(head,tail, 15);
    printNode(head , tail);

    insertAtTail(tail,tail, 18);
    printNode(head , tail);

    insertAtTail(head,tail, 19);
    printNode(head , tail);

    insertAtPosition(head, tail, 12, 2);
    printNode(head , tail);

}
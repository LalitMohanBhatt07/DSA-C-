#include<iostream>
using namespace std;

class Node{
    public:
    Node *next;
    int data;
    Node *prev;
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};

void print(Node* head){
    Node* temp=head;
    while(temp!=0){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void insertAtHead(Node* &head,int data){
    if(head==NULL){
        Node* newNode=new Node(data);
        head=newNode;
    }
    else{
        Node* newNode=new Node(data);
        newNode->next=head;
        head=newNode;
    }
}

void reverseLinkedList(Node* &head){
    Node* prev=NULL;
    Node* curr=head;
    Node* next;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
}

int main(){
    Node* head=NULL;

    insertAtHead(head,10);
    insertAtHead(head,20);
    insertAtHead(head,30);
    insertAtHead(head,40);
    insertAtHead(head,50);

    reverseLinkedList(head);

    print(head);
    
}
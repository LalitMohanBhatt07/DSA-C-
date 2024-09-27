//reverse linked list on the group of k

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

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

void printLinkedList(Node* head){
    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}
 


int main(){
    Node* head=NULL;
    insertAtHead(head,5);
    insertAtHead(head,4);
    insertAtHead(head,3);
    

    printLinkedList(head);


}


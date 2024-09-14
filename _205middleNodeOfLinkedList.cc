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

int getLength(Node* &head){
    int length=0;
    Node* temp=head;
    while(temp!=NULL){
        length++;
        temp=temp->next;
    }
    return length;
}

void printMiddleNode(Node* &head){
    int length=getLength(head);
    int position=length/2+1;
    int currPos=1;

    Node* temp=head;
    while(currPos!=position){
        temp=temp->next;
        currPos++;
    }
    cout<<temp->data<<endl;
}

int main(){
    Node* head=NULL;
    insertAtHead(head,10);
    insertAtHead(head,20);
    insertAtHead(head,30);
    insertAtHead(head,40);
    insertAtHead(head,50);
    printMiddleNode(head);
    //
}
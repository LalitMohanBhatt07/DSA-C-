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

void printLinkedList(Node* head){
    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int findMiddleNode(Node* head){
    Node* slow=head;
    Node* fast=head;

    while(fast->next!=NULL){
        fast=fast->next;
        if(fast->next!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
    }
    return slow->data;
}

bool isPalindrome(Node* head){
    //break into 2 halves
    //reverse second half
    //compare with first half
}

void insertAtHead(Node* &head, int data){
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

int main(){
Node* head=NULL;

insertAtHead(head, 1);
insertAtHead(head, 2);
insertAtHead(head, 3);
insertAtHead(head, 2);
insertAtHead(head, 1);

printLinkedList(head);

int middleElement=findMiddleNode(head);
cout<<"middle element : "<<middleElement;
} 
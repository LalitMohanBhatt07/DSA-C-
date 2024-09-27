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

void deleteDuplication(Node* &head){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        return;
    }

    Node* temp=head;
    while(temp!=NULL){
        if(temp->next!=NULL && temp->data==temp->next->data){
        Node* enxtNode=temp->next;
        temp->next=enxtNode->next;
        enxtNode->next=NULL;
        delete enxtNode;
        }
        else{
            temp=temp->next;
        }
    }


}

int main(){
    
}
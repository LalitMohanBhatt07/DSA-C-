#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(){
        this->prev=NULL;
        this->next=NULL;
    }

    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
};

int findLength(Node* head){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}

void deleteNode(Node* head, Node* tail, int position){
    if(head==NULL){
        cout<<"Cannot delete because Linked List in empty !";
        return;
    }

    if(head==tail){
        Node* temp=head;
        delete temp;
        head=NULL;
        tail=NULL;
        return;
    }

    int len=findLength(head);

    if(position==1){
        Node* temp=head;
        head=temp->next;
        temp->next=NULL;
        head->prev=NULL;
        delete temp;
    }

    else if(position==len){
        Node* prevNode =head;
        while(prevNode->next!=NULL){
            prevNode=prevNode->next;
        }
        prevNode->next=NULL;
        tail->prev=NULL;
        delete tail;
        tail=prevNode;
    }
        else{
            

        }
}
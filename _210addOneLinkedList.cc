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

Node* reverse(Node* head){
    Node* prev=NULL;
    Node* curr=head;

    while(curr!=NULL){
        Node* next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }

    head=prev;
}

void addOne(Node* &head){
    //reverse
    head=reverse(head);
     
    //add
    int carr=1;
    Node* temp=head;

    while(head!=NULL){

    }

    //reverse
}

int main(){

}
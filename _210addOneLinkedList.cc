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

Node* reverseLinkedList(Node* &head){
    Node* prev=NULL;
    Node* curr=head;

    while(curr!=NULL){
        Node* next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
    return head;
}

void addOne(Node* &head){
    head=reverseLinkedList(head);
    Node* temp=head;
    int carry=1;

    while(temp->next!=NULL){
        int totalSum=temp->data+carry;
        int digit=totalSum%10;
        carry=totalSum/10;
        temp->data=digit;

        if(carry==0){
            break;
        }
        
    }

    if(carry!=0){
        int totalSum=temp->data+carry;
        int digit=totalSum%10;
        carry=totalSum/10;

        temp->data=digit;
        Node* newNode=new Node(carry);
        temp->next=newNode;
    }

    reverseLinkedList(head);
}

int main(){
    Node* head=NULL;
    insertAtHead(head,5);
    insertAtHead(head,4);
    insertAtHead(head,3);
    

    printLinkedList(head);

    addOne(head);

    cout<<endl;
    printLinkedList(head);
}
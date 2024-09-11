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

void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout << endl;
}

int findLength(Node* head){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}

void insertAtHead(Node* &head, Node* &tail,int data){
    if(head==NULL){
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
    }
    else{
       Node* newNode=new Node(data);
       newNode->next=head;
       head->prev=newNode->prev;
       head=newNode; 
    }
}

void insertAtTail(Node* &head , Node* &tail, int data){
    if(head==NULL){
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
    }
    else{
        Node* newNode=new Node(data);
        tail->next=newNode;
        newNode->prev=tail;
        tail=newNode;
    }
}


void insertAtPosition(int data, Node* &head, Node* &tail, int position){
    if(head==NULL){
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
    }

    else{
        int len=findLength(head);
        if(position==1){
            insertAtHead(head,tail,data);
        }
        else if(position==len+1){
            insertAtTail(head,tail,data);
        }
        else{
            Node* newNode=new Node(data);
            Node* prevNode=NULL;
            Node* currNode=head;

            while(position!=1){
                position--;
                prevNode=currNode;
                currNode=currNode->next;
            }
        prevNode->next=newNode;
        newNode->prev=prevNode;
        newNode->next=currNode;
        currNode->prev=newNode;
        }
    }
}

void deleteNode(Node* &head, Node* &tail,int position){
    int len=findLength(head);
    if(head==NULL){
        cout<<"Cannot delete, because Linked list is empty"<<endl;
        return;
    }

    if(head==tail){
        Node* temp=head;
        delete temp;
        head=NULL;
        tail=NULL;
        return;
    }

    if(position==1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        head->prev=NULL;
        delete temp;
    }

   else if(position==len){
        Node* prevNode=tail->prev;
        tail->prev=NULL;
        prevNode->next=NULL;
        delete tail;
        tail=prevNode;
    }
    else{
         Node* prevNode=NULL;
         Node* currNode=head;

         while(position!=1){
            position--;
            prevNode=currNode;
            currNode=currNode->next;
         }

         prevNode->next=currNode->next;
         currNode->prev=NULL;
         currNode->next->prev=prevNode;
         currNode->next=NULL;
         delete currNode;
    }
}

int main(){
    
    Node* head=NULL;
    Node* tail=NULL;
    
    insertAtHead(head,tail,40);
    insertAtHead(head,tail,30);
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,10);

    insertAtTail(head,tail,1000);
    insertAtPosition(121,head,tail,3);

    deleteNode(head,tail,1);
    int len=findLength(head);
    deleteNode(head,tail,len);

    deleteNode(head,tail,3);

    print(head);
    // cout<<len<<endl;
}
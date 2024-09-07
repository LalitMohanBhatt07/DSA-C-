#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        this->data = 0;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }
}

void insertAtTail(Node* &head,Node* &tail,int data){
    if(head==NULL){
        Node *newNode=new Node(data);
        head=newNode;
        tail=newNode;
    }
    else{
        Node* newNode=new Node(data);
        tail->next=newNode;
        tail=newNode;
    }
}

int findLength(Node* &head){
    int length=0;
    Node* temp=head;
    while(temp!=NULL){
        length++;
        temp=temp->next;
    }
    return length;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}


//insert at middle
void insertAtPosition(int data,int position,Node* &head,Node* &tail){
    int length=findLength(head);
    if(position==1){
        insertAtHead(head,tail,data);
        return;
    }

    else if(position>length){
        insertAtTail(head,tail,data);
        return;
    }

    else{
        Node* newNode=new Node(data);

        Node* prev=NULL;
        Node* curr=head;
        while(position!=1){
            position--;
            prev=curr;
            curr=curr->next;
        }

        newNode->next=curr;
        prev->next=newNode;
    }
}


void deleteNode(Node* &head, Node* &tail, int position){

    int length=findLength(head);
    if(head==NULL){
        cout<<"Cannot delete because Linked List is empty";
    }

    if(head==tail){
        Node* temp=head;
        delete temp;
        head=NULL;
        tail=NULL;
        return;
    }

    if(position==1){
        //delete first Node
        Node* temp=head;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else if(position==length){
        //delete last Node
        Node* prev=head;
        while(prev->next!=NULL){
            prev=prev->next;
            prev->next=NULL;
            delete tail;
            tail=prev;
        }
    }
    else{
        //delete element form middle
        Node* prev=NULL;
        Node* curr=head;

        while(position!=1){
            position--;
            prev=curr;
            curr=curr->next;
        }

        prev->next=curr->next;

        curr->next=NULL;

        delete curr;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insertAtHead(head,tail,10);
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,30);

    insertAtTail(head,tail,100);
    insertAtTail(head,tail,200);

    print(head);

}

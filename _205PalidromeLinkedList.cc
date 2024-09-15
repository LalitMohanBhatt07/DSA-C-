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

Node* findMiddleNode(Node* head){
    Node* slow=head;
    Node* fast=head;

    while(fast->next!=NULL){
        fast=fast->next;
        if(fast->next!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
    }
    return slow;
}

Node* reverseLinkedList(Node* &head){
    Node* prev=NULL;
    Node* curr=head;

    while(curr!=NULL){
        Node* next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=curr->next;
    }
    return prev;
}

bool compareList(Node* head1, Node* head2){
    while(head1!=NULL && head2!=NULL){
        if(head1->data != head2->data){
            return false;
        }
        else{
            head1=head1->next;
            head2=head2->next;
        }
    }
    return true;
}

bool isPalindrome(Node* head){
    //break into 2 halves
    Node* midNode=findMiddleNode(head);
    Node* head2=midNode->next;
    midNode->next=NULL;

    //reverse second half
    head2=reverseLinkedList(head2);


    //compare with first half
    bool ans=compareList(head,head2);
    return ans;
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

bool ans=isPalindrome(head);
if(ans==true){
    cout<<"Linked list is palindrome";
}
else{
    cout<<"Linked list is not palindrome";
}


} 
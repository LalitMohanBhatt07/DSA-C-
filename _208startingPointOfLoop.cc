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

Node* findStartingPoint(Node* head){
    Node* slow=head;
    Node* fast=head;

    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }

        if(fast==slow){
            break;
        }
    }

    if(fast==NULL){
        return NULL;
    }

    slow=head;
    while(slow!=fast){
        slow=slow->next;
        fast=fast->next;
    }

    return slow;
}

int main(){

}
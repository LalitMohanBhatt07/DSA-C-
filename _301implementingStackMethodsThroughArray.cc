#include<iostream>
using namespace std;

class Stack{
    public:
    int* arr;
    int size;
    int top;

    Stack(int size){
        arr=new int[size];
        this->size=size;
        this->top=-1;
    }

    void push(int data){
        if(top==size-1){
            cout<<"Stack overflow"<<endl;
        }
        else{
            top++;
    arr[top]=data;
        }
    

    }

    void pop(){
        if(top==-1){
            cout<<"Stack underflow"<<endl;
        }
        top--;
    }

    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }

    int getTop(){
        if(top==-1){
            cout<<"Stack Empty"<<endl;
        }
        return arr[top];
    }

    int getSize(){
        return top+1;
    }

};



int main(){

}

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
    top++;
    arr[top]=data;

    }

    void pop(){
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
        return arr[top];
    }

};



int main(){

}

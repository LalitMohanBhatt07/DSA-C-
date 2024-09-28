#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);

    cout<<"Size of stack is : "<<st.size()<<endl;

    //remove
    st.pop();

    if(st.empty()){
        cout<<"Stack is empty !"<<endl;
    } 
    else{
        cout<<"Stack is not empty !"<<endl;
    }

    //top element
    cout<<"top element is :"<<st.top()<<endl;
}
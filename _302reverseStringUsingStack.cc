#include<iostream>
#include<stack>
using namespace std;
int main(){
    string str="Lalit Bhatt";
    stack<char>s;
    for(int i=0;i<str.length();i++){
        s.push(str[i]);
    }

    cout<<endl;

    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
}
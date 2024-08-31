#include<iostream>
#include<string.h>
using namespace std;

void replaceCharacter(char ch[],int n){
    int index=0;
    while(ch[index]!='\0'){`
        if(ch[index]=='@'){
            ch[index]=' ';
        }
        index++; 
    }
}

int main(){
    char ch[100];
    cin.getline(ch,100);
    int size=strlen(ch);
    cout<<"String before replacing @ with space is : "<<ch;
    replaceCharacter(ch,size);
    cout<<"String after replacing @ with space is : "<<ch;
    
}
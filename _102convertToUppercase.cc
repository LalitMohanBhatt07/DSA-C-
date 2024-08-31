#include<iostream>
#include<string.h>
using namespace std;

//character arrays by default hi as a reference paas htoe h 

void convertLowercaseToUppercase(char ch[],int n){
    int index=0;
    while(ch[index]!='\0'){
        char currentCharacter=ch[index];

        //check if lowercase then covert to uppercse
        if(currentCharacter>='a' && currentCharacter<='z'){
            ch[index]=currentCharacter-'a'+'A';
        }
        index++;
    }
}

int main(){
    char ch[100];
    cin.getline(ch,100);
       int size = strlen(ch);
    cout<<"String without converting to uppercase : "<<ch;
    convertLowercaseToUppercase(ch,size);
    cout<<"String after converting to uppercase"<<ch;
}
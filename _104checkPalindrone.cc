#include<iostream>
#include<string.h>
using namespace std;
bool checkPalindrome(char ch[],int n){
    int i=0,j=n-1;

    while(i<=j){
        if(ch[i]==ch[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}

int main(){
    char ch[100];
    cin.getline(ch,100);
    int size=strlen(ch);
    bool ans=checkPalindrome(ch,size);
    if(ans==true){
        cout<<"String is palindrone";
    }
    else{
        cout<<"String is not palindrome";
}
}
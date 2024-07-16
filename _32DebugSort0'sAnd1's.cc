#include<iostream>
using namespace std;
void sort0and1s(int input[],int size){
    int index=0;
    for(int i=0;i<size;i++){
        if(input[i]==0){
            input[index]=0;
            index++;
        }
    }
    for(int i=index;i<size;i++){
        input[i]=1;
    }
}
void print(int arr[],int size){
    
}
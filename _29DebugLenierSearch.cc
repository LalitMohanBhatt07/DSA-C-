#include<iostream>
using namespace std;
int linearSearch(int arr[], int n ,int val){
    for(int i=0;i<n;i++){
        if(arr[i]==val){
           return i;
        }
    }
    return -1;
}

int main(){
    int arr[]={11,22,33,44,55};
    int size=5;
    int value=33;
    int ans=linearSearch(arr,size,value);
    if(ans==-1){
        cout<<"Value is not present inside araary !";
    }
    else{
        cout<<"Value found at index : "<<ans;
    }
    
}
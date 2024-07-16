#include<iostream>
using namespace std;

void sortIncreasing(int arr[],int n){
    int noZero=0;
    int noOne=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            noZero++;
        }
        if(arr[i]==1){
            noOne++;
        }
    }
    int index=0;
    while(noZero--){
        arr[index]=0;
        index++;
    }
    while(noOne--){
        arr[index]=1;
        index++;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    int arr[]={0,1,1,1,0,0,0,1};
    int n=8;
    sortIncreasing(arr,n);
}
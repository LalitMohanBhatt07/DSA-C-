#include<iostream>
using namespace std;
// we will use two pointer approach

//we will use i for traversing the array and j is used for wapping 

void swapElements(int arr[],int size){
    int j=0;
    
    //traversing array
    for(int i=0;i<size;i++){
        if(arr[i]<0){
            swap(arr[i],arr[j]);
            j++;
        }

    }
}

    void print(int arr[],int size){
        for(int i=0;i<size;i++){
        cout<<arr[i]<<",";
    }
    }

int main(){
    int arr[]={23,-7,12,-10,-11,40,60};
    int size=7;

    swapElements(arr,size);
    print(arr,size);
}
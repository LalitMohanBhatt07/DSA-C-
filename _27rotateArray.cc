#include<iostream>
using namespace std;

void shiftNPlaces(int arr[],int place,int size){
    int temp[size];
    for(int index=0;index<size;index++){
        int newIndex=(index+place)%size;
        temp[newIndex]=arr[index];
    }
    for(int i=0;i<size;i++){
        arr[i]=temp[i];
    }

}

void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<",";
    }
}

int main(){
    int arr[6]={10,20,30,40,50,60};
    int size=6;
    int places=2;
    shiftNPlaces(arr,places,size);
    print(arr,size);
}
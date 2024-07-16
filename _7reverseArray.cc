#include<iostream>
using namespace std;
void swap(int arr[],int size){
    for(int i=0;i<size/2;i++){
        int temp=arr[i];
        arr[i]=arr[size-1-i];
        arr[size-1-i]=temp;
    }
    cout<<"Swapped array is: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={10,20,30,40,50,60};
    int size=6;
    swap(arr,size);
    
}
#include<iostream>
using namespace std;

void shiftByOne(int arr[],int n){
    int temp=arr[n-1];
    for(int i=n-1;i>=1;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int size=6;
    shiftByOne(arr,size);
}
#include<iostream>
using namespace std;

int findMissingElement(int arr[],int size){
    int start=0;
    int end=size-1;
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        int difference=arr[mid]-mid;
        if(difference==1){
            start=mid+1;
        }
        else{
            ans=mid;
            end=mid-1;
        }
    }
    if(ans+1==0){
        return size+1;
    }
    return ans;
}

int main(){
    int arr[]={1,2,3,4,5,6};
    int size=7;
    int result=findMissingElement(arr,size);
    if(result==-1){
        cout<<"No Element is Missing ! ";
    }
    else{
        cout<<"Missing Element is : "<<result+1;
    }
}
#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int target){
    int start=0;
    int end=size-1;

    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==target){
            return mid;
        }

        else if(target>arr[mid]){
            start=mid+1;
        }
        else if(target<arr[mid]){
            end=mid-1;
        }
    }
    return -1;
}

int main(){
    int arr[]={10,20,30,40,50,60,70,80,90};
    int size=9;
    int value=70;
    int answerIndex=binarySearch(arr,size,value);
    if(answerIndex==-1){
        cout<<"Element not exist in Array !"<<endl;
    }
    else{
        cout<<"Element found at index : "<<answerIndex;
    }
}
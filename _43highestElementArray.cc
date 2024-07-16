#include<iostream>
using namespace std;

int highestElement(int arr[],int size){
    int start=0;
    int end=size-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(start==end){
            return start;
        }

        if(arr[mid]>arr[mid+1]){
            return mid;
        }
    
        else if(arr[mid]<arr[mid-1]){
            return mid-1;
        }

        else if(arr[start]>arr[mid]){
            end=mid-1;
        }

        else{
            start=mid+1;
        }
    }
    return -1;
}

int main(){
int arr[]={12,13,14,2,3,5};
int size=6;
int answer=highestElement(arr,size);
if(answer==-1){
cout<<"there is somethign wrong in your array !";
}
else{
    cout<<"Highest Element occurs in index : "<<answer;
}
}
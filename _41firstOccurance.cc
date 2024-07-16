#include<iostream>
using namespace std;

int firstOccurance(int arr[],int size,int target){
    int start=0;
    int end=size-1;
    int ans=-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(target==arr[mid]){
            ans=mid;
            end=mid-1;
        }
        else if(target<arr[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return ans;
}

int main(){
    int arr[]={10,20,30,30,30,30,40,50};
    int size=8;
    int target=30;

    int answer=firstOccurance(arr,size,target);
    if(answer==-1){
        cout<<"Element does not belong to given array !";
    }
    else{
        cout<<"Element Found at index :"<<answer;
    }
}
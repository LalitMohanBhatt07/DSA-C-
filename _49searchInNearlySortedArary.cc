#include<iostream>
using namespace std;

search(int arr[],int n,int target){
    int start=0,end=n-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(mid-1>=0 && arr[mid-1]==target){
            return mid-1;
        }
        if(arr[mid]==target){
            return mid;
        }
        if(arr[mid+1]==target){
            return mid+1;
        }
        if(target>arr[mid]){
            start=mid+2; // yaha pe mid+1 bhi kar sakte h par mid+2 isliye kara h kyonki hum arr[mid+1] ko bhi check kar rahe h.
        }
        else{
            end=mid-2;
        }
    }
    return -1;
}

int main(){
    //nearly sorted array means i ki value nearly sorted array mein ya to i-1 pe hoge ,ya to i pe hi hogi ya to i+1 pe hoge

    int arr[]={20,10,30,50,40,70,60};
    int n=7;
    int ansIndex=search(arr,7,30);
    if(ansIndex==-1){
        cout<<"Element not found !"<<endl;
    }
    else{
        cout<<"Element found at index :"<<ansIndex;
    }
}
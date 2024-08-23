// here pivot element is largest element
#include<iostream>
using namespace std;

int findPivotIndex(int arr[],int size){
    int start=0, end=size-1, mid, ans;
    if(start==end){
        return start;
    }
    while(start<=end){
    mid=start+(end-start)/2;
    if(arr[mid]<arr[mid-1]){
        return mid-1;
    }
    else if(arr[mid]>arr[mid+1]){
        return mid;
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
    int arr[]={12,14,16,2,4,6,8,10};
    int ans=findPivotIndex(arr,8);
    cout<<"Largest Element is : "<<arr[ans];
}
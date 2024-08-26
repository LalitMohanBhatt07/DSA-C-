#include<iostream>
using namespace std;

int findOddOccuringElement(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(start==end){
            return start;
        }

        if(mid & 1) { // it means odd ie mid%i==1
            if(mid-1>=0 && arr[mid-1]==arr[mid]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }

        else{
            if(mid+1<n && arr[mid]==arr[mid+1]){
                start=mid+2;
            }
            else{
                end=mid;
            }
        }
    }
    return -1;
}

int main(){
    int arr[]={10,10,2,2,3,3,2,5,5,6,6,7,7};
    int n=13;
    int ans=findOddOccuringElement(arr,n);

    cout<<"Final answer is : "<<arr[ans]<<endl;
}


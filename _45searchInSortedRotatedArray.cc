#include<iostream>
#include<stdlib.h>
#include<vector>
using namespace std;
int findPivotIndex(vector<int>&arr){
    int start=0,end=arr.size()-1,mid;
    if(start==end){
            return start;
        }
    while(start<=end){
        mid=start+(end-start)/2;
        
        if(arr[mid]>arr[mid+1]){
            return mid;
        }
        else if(arr[mid]<arr[mid-1]){
            return mid-1;
        }
        else if(arr[mid]<arr[start]){
            end=mid-1;
        }
        else{
            end=start+1;
        }

    }
    return -1;
}

int binarySearch(vector<int>&arr,int target,int start,int end){
    int mid;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(target>arr[mid]){
            start=mid+1;
        }
        else {
            end=mid-1;
        }

    }
    return -1;
}

int search(vector<int>&arr,int target,int pivot){
    int start=0;
    int result;
    int end=arr.size()-1;
    if(target>=arr[start] && target<=arr[pivot]){
        result =binarySearch(arr,target,0,pivot);
    }
    else{
        result=binarySearch(arr,target,pivot+1,end);
    }
    return result;
}

int main(){
    vector<int> arr({12,14,16,2,4,6,8,10});
    int pivot=findPivotIndex(arr);
    int result=search(arr,6,pivot);
    cout<<"Element found at index : "<<result;
    
}

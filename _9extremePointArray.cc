// input array= [10,20,30,40,50,60]
//output array=[10,60,20,50,30,40]

#include<iostream>
using namespace std;

void extremePoint(int arr[],int size){
    int left=0;
    int right=size-1;
    while(left<=right){
        if(left==right){
            cout<<arr[left];
        }
        else{
        cout<<arr[left]<<" ";
        cout<<arr[right]<<" ";
        }
        left++;
        right--;
    
    }
}

int main(){
    int arr[]={10,20,30,47,40,50,60};
    int size=7;
    extremePoint(arr,size);
}
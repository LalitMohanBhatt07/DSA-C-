//dynamic array is seperate topic .. it is not vecotr or stl.

#include<iostream>
using namespace std;
void printElements(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    cout<<"Enter number of elements inside an array : ";
    int n;
    cin>>n;
    int * arr=new int[n];

    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        arr[i]=data;
    }

    printElements(arr,n);
}
#include<iostream>
using namespace std;

int main(){
    int arr[10];
    int a=5;

    cout<<"Address of a is : "<<&a<<endl; // address will come in hexadecimal form

    cout<<"Address of array is : "<<&arr<<endl; // we can also use arr instead of &arr because both denotes base address of array

    cout<<"Size of a is : "<<sizeof(a)<<endl;
    cout<<"Size of array is : "<<sizeof(arr)<<endl;

    int err[10];
    for(int i=0;i<10;i++){
        cin>>err[i];
    }
    for(int i=0;i<10;i++){
        cout<<"Value at index "<<i<<"is : "<<err[i]*2<<endl;
    }
}
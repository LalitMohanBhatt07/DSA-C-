// we know that XOR gives 0 for similar element and 1 for opposite number
//agar hum 0 ka kisi ke sath bhi XOR karenge to jiske sath karenge vo answer ho jayega...or similar elements cut ho jayegenge
#include<iostream>
using namespace std;

int getUnique(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    return ans;
}

int main(){
    int arr[]={2,10,11,10,2,13,15,13,15};
    int n=9;
    int finalAnswer=getUnique(arr,n);
    cout<<"Final answer is : "<<finalAnswer;
}
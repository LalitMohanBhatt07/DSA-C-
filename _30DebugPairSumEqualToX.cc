#include<iostream>
using namespace std;
int pairSumToX(int input[],int size,int X){
    int pairs=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(input[i]+input[j]==X){
                pairs++;
            }
        }
    }
    return pairs;
}
int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    int val=7;
    int ans=pairSumToX(arr,size,val);
    cout<<"Total pairs are : "<<ans;
}
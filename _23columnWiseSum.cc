#include<iostream>
using namespace std;

void colWiseSum(int arr[][4],int row,int col){
    int sum=0;
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            sum=sum+arr[j][i];
        }
        cout<<"Sum of col of index "<<i<<" is: "<<sum<<endl;
    }
}

int main(){
    int row=3;
    int col=4;
    int arr[][4]={{10,20,5,7},{2,4,6,8},{10,15,15,10}};
    colWiseSum(arr,row,col);
}
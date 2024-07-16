#include<iostream>
using namespace std;

void rowWiseSum(int arr[][4],int row,int col){
    int sum=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            sum=sum+arr[i][j];
        }
         cout<<"Sum of "<<i<<"th row : "<<sum<<endl;
            sum=0;
    }
}

int main(){
    int row=3;
    int col=4;
    int arr[3][4]={{10,20,5,7},{2,4,6,8},{10,15,15,10}};
    rowWiseSum(arr,row,col);
}
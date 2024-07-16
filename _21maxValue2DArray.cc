#include<iostream>
#include<limits.H>
using namespace std;

int maxValue(int arr[][4],int row,int col){
    int maxValue=INT_MIN;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]>maxValue){
                maxValue=arr[i][j];
            }
        }
    }
    return maxValue;
}

int main(){
    int arr[3][4]={{10,20,30,40},{50,60,70,80},{90,100,110,120}};
    
    int row=3;
    int col=4;

    int maximumValue=maxValue(arr,row,col);
    cout<<"Maximum value within 2D array is : "<<maximumValue;
}
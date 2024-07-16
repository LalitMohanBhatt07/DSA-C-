#include<iostream>
using namespace std;

void print(int arr[][4],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void transpose(int arr[][4],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=i;j<col;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
}

int main(){
    int arr[][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int row=4;
    int col=4;
    cout<<"PRINTING BEFORE TRANSPOSING : "<<endl;
    print(arr,row,col);
    cout<<"PRINTING AFTER TRANSPOSING : "<<endl;
    transpose(arr,row,col);
    print(arr,row,col);
    

}
#include<iostream>
using namespace std;

void printArray(int arr[][4],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<",";
        }
        cout<<endl;
    }
}

void printColumnWise(int arr[][4],int row,int col){
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            cout<<arr[j][i]<<",";
        }
        cout<<endl;
    }
}
int main()
{
    int arr[3][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
        };

    // 2d declaration ke time pe at least column ka size batana padta h nahi to error aati h same functin parameter mein bhi at least column parameter dena padta h...

    int rows=3;
    int column=4;
    printArray(arr,rows,column);

    cout<<"COLUMN WISE PRINTING : "<<endl;
    printColumnWise(arr,rows,column);

    

    return 0;
}
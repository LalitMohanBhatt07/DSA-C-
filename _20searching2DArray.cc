#include<iostream>
using namespace std;

bool searchElement(int arr[][4],int row,int col,int target){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==target){
                return true;
            }
    }
    }
    return false;
}


int main(){
int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
int row=3;
int col=4;
int target=5;
bool result=searchElement(arr,row,col,target);
if(result==true){
    cout<<"Number found !";
}
else{
    cout<<"Number not found";
}
}
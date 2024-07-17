#include<iostream>
#include<vector>
using namespace std;
bool search(vector<vector<int>>& matrix,int target){
    int row=matrix.size();
    int col=matrix[0].size();
    int n=row*col;

    int start=0;
    int end=n-1;

    while(start<=end){
        int mid=start+(end-start)/2;
        int rowIndex=mid/col;
        int colIndex=mid%col;
        int currNumber=matrix[rowIndex][colIndex];

        if(currNumber==target){
            return true;
        }
        else if (currNumber>target){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        
    }
    return false;
}

int main(){
    vector<vector<int>>vect{
        {1,2},
        {3,4,5},
        {6,7,8}
    };
    bool result=search(vect,4);
    cout<<result;
}

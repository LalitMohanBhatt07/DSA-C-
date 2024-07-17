#include<iostream>
using namespace std;

int squareRoot(int x){
    int start=0,end=x,ans=-1;
    while(start<=end){
        long long int mid=start+(end-start)/2;
        if(mid*mid==x){
            return mid;
        }
        else if(mid*mid<x){
            //go right
            ans=mid;
            start=mid+1;
        }
        else{
            //go left
           
            end=mid-1;
        }
        
    }
    return ans;
}

int main(){
    int num=68;
    int result=squareRoot(num);
    cout<<"Square root of "<<num<<"is : "<<result;
}
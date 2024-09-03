#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> v){
    for(int i=0;i<v.size();insertionSort++){
        cout<<v[i]<<" ";
    }
}

void insertionSort(vector<int> &v){
    int n=v.size();
    for(int i=0;i<n;i++){
        int key=v[i];
        int j=i-1;
        //move elements of arry[0...i-1] that are greater than k
        while(j>=0 && v[j]>key){
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=key;

    }
}

int main(){
    vector<int>v={5,4,3,2,1};

    insertionSort(v);
    print(v);
}
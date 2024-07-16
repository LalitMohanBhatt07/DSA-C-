#include<iostream>
#include<vector>

using namespace std;

void print(vector<int>v){
    int size=v.size();
    for(int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }
}

int main(){
    vector<int> v;
    while(1){
        int data;
        cin>>data;
        v.push_back(data);
        cout<<"Capicity : "<<v.capacity();
        cout<<"Size : "<<v.size()<<endl;

        //if we want to delete value from vector then we can use v.pop_back similarly if we wnat to insert data inside an vector then we can use v.push_data

        v.pop_back(); // last element hatega.

        v.clear(); // it is used to clear elements inside the vector

        cout<<v.front(); // v.front() is used to print front element
        cout<<v.back(); // v.back() is used to print back element
    }
}
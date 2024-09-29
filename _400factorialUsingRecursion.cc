#include<iostream>
using namespace std;

int factorial(int n){
    //base case
    if(n==1){
        return 1;
    }

    if(n==0){
        return 1;
    }

    //recursive realtion
    int ans= n* factorial(n-1);

    //processing
    return ans;
}

int main(){
    cout<<factorial(5);
}
#include<iostream>
using namespace std;
int incrementByOne(int n){ // ye n alag h jo n neeche tha osse... 
    n++;
    return n;
}
int main(){
    int n=55;
    n=incrementByOne(n);
    cout<<n;
}
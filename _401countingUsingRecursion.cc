#include<iostream>
using namespace std;

void printing(int n){
    if(n==1){
        cout<<1;
        return;
    }
    cout<<n<<endl;
    printing(n-1);
}

int main(){
    printing(5);
    
}
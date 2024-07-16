#include<iostream>
using namespace std;
void incrementByOne(int&n){
    n++;
}
int main(){
    int n;
    cin>>n;
    incrementByOne(n);
    cout<<"n: "<<n<<endl;
    
}
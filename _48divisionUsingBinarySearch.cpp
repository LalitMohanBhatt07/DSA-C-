#include<iostream>
using namespace std;
int findQuotient(int divident,int divisor){
    int s=0,e=divident;
    int mid;
    int ans=-1;

    while(s<=e){
        mid=s+(e-s)/2;
        if(divisor*mid==divident){
            return mid;
        }
        else if(divisor*mid<divident){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans;
}
int main(){
    int divident=25;
    int divisor=7;
    int ans=findQuotient(abs(divident),abs(divisor));

    if((divisor>0 && divident<0) || (divisor<0 && divident>0)){
        ans=0-ans;
    }

    cout<<"Final answer is : "<<ans<<endl;
}
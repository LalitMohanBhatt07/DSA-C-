#include<iostream>
using namespace std;
int tripletSumToX(int input[], int size, int x){
	int triplets = 0;
	for(int i=0; i<size; i++){
		for(int j=i+1; j<size; j++){
			for(int k=i+2; k<size; k++){
				if(input[i] + input[j] + input[k] == x) triplets++;
			}
		}
	}
	return triplets;
}
int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    int x=6;
    int ans=tripletSumToX(arr,size,x);
    cout<<"total number of triplets : "<<ans;
}
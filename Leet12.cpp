#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int complementbaseten(int n){

	int arr[32];
	int i;
	for(i=0;n>0;i++){
		arr[i] = n%2;
		n = n/2;
	}

	for(int j=i-1;j>=0;j--){
		if(arr[j] == 1){
			arr[j] = 0;
		}
		else{
			arr[j] = 1;
		}
		cout<<arr[j]<<" ";
	}
}


int main(){
	int num;
	cin>>num;

	complementbaseten(num);
}
// Best Time to Buy and Sell Stock

#include<iostream>
using namespace std;

void min(int arr[],int n){
	int s = arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]<arr[0])
			arr[0] = arr[i];
	}
}

void max(int arr[],int n){
	int g = arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]>arr[0])
			arr[0] = arr[i];
	}
}


void fun(int arr[],int n){
	int g,s,s1,s2;
	if(s == arr[n-1]){
		cout<<"didnot buy";
	}
	else{
		for(int i=0;i<n;i++){
			if(arr[i] == s){
				int s1 = i;
				break;
			}
		}

		for(int i=0;i<n;i++){
			if(arr[i] == g){
				int s2 = i;
				break;
			}
		}

		if(s1 < s2)
			cout<<g-s;
		else
			cout<<"cant be purchased";
	}
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	min(arr,n);
	max(arr,n);
	fun(arr,n);
}
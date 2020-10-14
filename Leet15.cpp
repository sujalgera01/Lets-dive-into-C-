#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int houserob(int arr[],int n){
	int sum = 0;
	int sum1 = 0;
	if(n == 2){
		return 0;
	}
	if(n%2 == 0){
		for(int i=0;i<n;i=i+2){
			sum = sum + arr[i];
			sum1 = sum1 + arr[i+1]; 
		}
		if(sum>sum1)
			cout<<sum;
		else
			cout<<sum1;
	}
	else{
		int max = *max_element(arr,arr+n);
		cout<<max;
		
	}
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	houserob(arr,n);
}

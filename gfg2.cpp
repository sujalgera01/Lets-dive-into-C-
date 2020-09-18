// Array Rotation

#include<iostream>
using namespace std;

int rotate(int arr[],int n,int k){
	
	for(int i=0;i<k;i++){
		int j;
		int temp = arr[0];
		for(int j=0;j<n;j++)
			arr[j] = arr[j+1];

		arr[j-1] = temp;
	}

	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
}

int main(){
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	rotate(arr,n,k);
}
// Array Rotation - new method

#include<iostream>
using namespace std;

void reverse_full(int arr[],int initial,int final){

	while(initial<final){
		int temp = arr[initial];
		arr[initial] = arr[final];
		arr[final] = temp;
		initial++;
		final--;
	}
}

void reverse_part(int arr[], int n, int d){

	if(d == 0)
		return;


	reverse_full(arr,0,d-1);
	reverse_full(arr,d,n-1);
	reverse_full(arr,0,n-1);
}

void print_array(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	int n,d;
	cin>>n>>d;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[n];
	}

	reverse_part(arr,n,d);
	print_array(arr,n);
}
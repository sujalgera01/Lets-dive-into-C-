#include<iostream>
using namespace std;

int factors(int num){
	for(int i=2;i<=num;i++){
		if(num % i == 0){
			cout<<i<<" ";
		}
	}
}

void arrange(int arr[],int n){
	int k;
	for(int i=0;i<n/2;i++){
		k = arr[i]*arr[i+1];
		
		arr[i+1] = k;
	}
}

int main(){
	int n;
	cin>>n;

	factors(n);
}
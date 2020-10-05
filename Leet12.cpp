#include<iostream>
using namespace std;

int complementbaseten(int n){

	int arr[10];
	int i;
	for(i=0;n>0;i++){
		arr[i] = n%2;
		n = n/2;
	}

	for(int j=i-1;j>0;j--){
		cout<<arr[j]<<" ";
	}

}

int main(){
	int num;
	cin>>num;

	complementbaseten(num);
}
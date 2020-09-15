// C++ program to find all elements in array of integers which have at-least two greater elements

#include<iostream>
using namespace std;

int fun(int arr[],int n){
	int i,j,min;
	for(i=0;i<n;i++){
		int count = 0;
		min = arr[i];
		for(j=0;j<n;j++){
			if(min<arr[j]){
				count++;
				if(count == 2){
					cout<<min;
					break;
				}
			}
		}
	}
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	fun(arr,n);
}
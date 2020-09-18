// // // Best Time to Buy and Sell Stock

// // // INCOMPLETE..........

#include<iostream>
using namespace std;

// // void min(int arr[],int n){
// // 	int s = arr[0];
// // 	for(int i=0;i<n;i++){
// // 		if(arr[i]<arr[0])
// // 			arr[0] = arr[i];
// // 	}
// // }
// // void fun(int arr[],int n){
// // 	int g,s,s1,s2;
// // 	if(s == arr[n-1]){
// // 		cout<<"didnot buy";
// // 	}
// // 	else{
// // 		for(int i=0;i<n;i++){
// // 			if(arr[i] == s){
// // 				int s1 = i;
// // 				break;
// // 			}
// // 		}

// // 		for(int i=0;i<n;i++){
// // 			if(arr[i] == g){
// // 				int s2 = i;
// // 				break;
// // 			}
// // 		}

// // 		if(s1 < s2)
// // 			cout<<g-s;
// // 		else
// // 			cout<<"cant be purchased";
// // 	}
// // }

// void profit(int arr[],int n){
// 	int brr[n];
// 	for(int i=0;i<n;i++){
// 		brr[i] = arr[i+1]-arr[i];
// 	}

// }

// void max(int brr[],int n){
// 	int g = brr[0];
// 	for(int i=0;i<n;i++){
// 		if(brr[i]>brr[0])
// 			brr[0] = brr[i];
// 	}

// 	cout<<g;
// }

void profit(int arr[],int n){
	int p = 0;
	int b = arr[0];
	int s = arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]<b){
			b = arr[i];
			s = arr[i+1];
		}
		if(s-b>0){
			p = (s-b);
		}
	}

	for(int i=0;i<n;i++){
		if(arr[i]>s){
			s = arr[i];
		}
		if(s-b>0){
			p = (s-b);
		}
	}
	cout<<p;
}


int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	profit(arr,n);
	// fun(arr,n);
}

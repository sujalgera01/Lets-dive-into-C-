#include<iostream>
// #include<bits/stdc++.h>
#include<unordered_set>
// #include<functional>
using namespace std;

// int sparray(int arr[]){ 
// 	unordered_set<int> Set(arr,arr+n);
// 	for(int x: Set){
// 		cout<<x<<endl;
// 	}
// 	// for(int i=0;i<n;i++){

// 	// }
// }

int main(){
	int n;
	int arr[n];
	n = sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	std::unordered_set<int> S(arr,arr+n);
	for(int x: S){
		cout<<x<<endl;
	}

	// sparray(arr);
}
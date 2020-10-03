// K-diff Pairs in an Array

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int diffPairs(int arr[],int n,int k){
	int a,b;
	pair<int,int> p1;
	pair<int,int> p2 (0,0);
	for(int i=0;i<n;i++){
		a = arr[i];
		for(int j=i+1;j<n;j++){
			b = arr[j];
			if(b-a == k){
				p1.first = a;
				p1.second = b;
				if(p1 != p2){
					p2 = p1;
					cout<<p2.first<<","<<p2.second<<endl;
				}
			}		
		}
		
	}
}

int main(){
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	diffPairs(arr,n,k);
}
#include<iostream>
#include<bits/stdc++.h>
#include<set>
using namespace std;

int sparray(set<int> A){
    int m = A.size();
    int k = 0;
    for(int b: A){
		if(b>=m){
			k++;
		}
		else{
			k = -1;
			break;
		}
	}
	if(k == -1)
	    cout<<"-1";
	else
	    cout<<k;
    
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	std::set<int> S(arr,arr+n);

	sparray(S);
}
#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int lexorder(string s){
	int pos = 0;
	string k;
	int l = s.length();
	int count = 0;
	int i,j;
	for(i=0;i<l;i++){
		for(j=0;j<l;j++){
			if(s.at(i) == s.at(j)){
				break;
		}
		}

	if(i == j){
		s.at(pos++) = s.at(i);
	}
	cout<<s;
	}


	// for(int i=0;i<l;i++){
	// 	if(s.at(i) != '*'){
	// 		cout<<s.at(i);
	// 	}
	// }
	// k = s;
	// sort(k,k+l1);
	// cout<<k;
}

int main(){
	string s;
	cin>>s;
	lexorder(s);
}
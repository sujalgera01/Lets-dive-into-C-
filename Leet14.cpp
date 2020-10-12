#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int buddystrings(string s1,string s2){
	if(s1 == ""){
		return false;
	}
	if(s1 == s2){
		return false;
	}
	else{
		for(int i=0;i<s1.size();i++){
			if(s1[i] != s2[i]){
				swap(s1[i],s1[i+1]);
			}
		}
		if(s1==s2){
			return true;
		}
	}
}

int swap(int a,int b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}

int main(){
	string s1,s2;
	cin>>s1>>s2;

	buddystrings(s1,s2);
}
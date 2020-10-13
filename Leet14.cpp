#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int buddystrings(string s1,string s2){
	if(s1 == ""){
		cout<<"false";
	}
	if(s1 == s2){
		int count = 0;
		for(int i=0;i<s1.size()-1;i++){
			if(s1[i] == s1[i+1]){
				count++;
			}
			else{
				count = 0;
			}
		}
		if(count == 0)
			cout<<"false";
		else
			cout<<"true";
	}
	else{
		for(int i=0;i<s1.size();i++){
			if(s1[i] != s2[i]){
				swap(s1[i],s1[i+1]);
			}
		}
		if(s1==s2){
			cout<<"true";
		}
		else{
			cout<<"false";
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
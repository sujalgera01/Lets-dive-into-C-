#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int lenofstring(string s1,string s2){
	int sizes1 = s1.size();
	int sizes2 = s2.size();
	cout<<sizes1<<endl;
	cout<<sizes2<<endl;
}

int concat(string s1,string s2){
	string c = s1+s2;
	cout<<c<<endl;
}

int charswap(string s1,string s2){
	int temp;
	temp = s1[0];
	s1[0] = s2[0];
	s2[0] = temp;

	cout<<s1<<" "<<s2;
}

int main(){
	string s1,s2;
	cin>>s1>>s2;

	lenofstring(s1,s2);
	concat(s1,s2);
	charswap(s1,s2);
}
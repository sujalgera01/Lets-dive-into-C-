// incomplete..

#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int fun(vector<int> v1,vector<int> v2){

}

int main(){
	int p,l;
	cin>>p>>l;
	vector<int> penguin_pos;
	vector<int> penguin_new_pos;
	vector<int> newpos;
	penguin_pos.resize(l);
	penguin_new_pos.resize(l);
	int count = 0;
	for(int i=0;i<p;i++){
		int val1,val2;
		if(val1 == val2){
		    count--;
		}
		cout<<"Enter pen pos val1: ";
		cin>>val1;
		penguin_pos.push_back(penguin_pos.at(val1));


		cout<<"Enter pos to be pushed: ";
		cin>>val2;
		penguin_new_pos.push_back(penguin_new_pos.at(val2));
        
		newpos.push_back(val1);
		count++;

	}
	cout<<count;

}
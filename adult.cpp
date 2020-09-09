// check if person is adult or not
#include<iostream>
using namespace std;
int main(){
	int age;
	cout<<"Enter the age: ";
	cin>>age;
	if(age>0){
		if(age<18){
		cout<<"Not Adult";
	}
	else{
		cout<<"Adult";
	}
	}	
	else{
		cout<<"Age can't be negative";
	}	
}

// print detaila with age and gender both
#include<iostream>
#include<string>
using namespace std;
int main(){
	int age;
	char gender;
	cout<<"Enter age: ";
	cin>>age;
	cout<<"Enter gender: ";
	cin>>gender;

	if(gender == 'M'){
		cout<<"Male";
		if(age >= 18)
			cout<<"Adult";
		else
			cout<<"Kid";
	}
	else if(gender == 'F'){
		cout<<"female";
		if(age>= 18)
			cout<<"Adult";
		else
			cout<<"Kid";
	}
	else{
		cout<<"Not a valid Input";
	}
}
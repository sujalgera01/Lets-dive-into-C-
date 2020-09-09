#include<iostream>
using namespace std;
int main(){
	for(int i=0;i<10;i++){
		int x,y;
		cout<<"Enter x,y: ";
		cin>>x>>y;
		if(y == 0){
			cout<<"invalid Input";
			continue;
		}

		cout<<x/y<<endl;
	}
}
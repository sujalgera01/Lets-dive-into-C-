// STACK DESIGNER

// #include<iostream>
// #include<stack>
// using namespace std;

// stack<int>_push(int arr[],int n)
// {
//    stack<int>s;
//    int i;
//    for(i=0;i<n;i++){
//        s.push(arr[i]);
//    }
//    return s;
// }

// void _pop(stack<int>s)
// {
//     while(!s.empty()){
//         cout<<s.top()<<" ";
//         s.pop();
//     }
// }

#include<iostream>
#include<stack>
using namespace std;
int top = -1;
int push(int element){
	if(isFull()){
		cout<<"Stack is full";
	}
	else{
		top++;
		arr[top] = element;
	}
}

void pop(){

}

int main(){
	int n;
	cin>>n;
	int arr[n],brr[]="";

	for(int i=0;i<n;i++){
		brr.push(arr[i]);
	}
}
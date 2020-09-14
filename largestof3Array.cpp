#include <iostream>
using namespace std;

int largest_of_three(int arr[],int n){
    int minimum;
    if(n<3){
        cout<<"Invalid";
    }
    else{
        int f,s,t,i;
        f=s=t=0;
        for(int i=0;i<n;i++){
            if(arr[i]>f){
                t=s;
                s=f;
                f = arr[i];
            }    
            else if(arr[i]>s){
                t=s;
                s = arr[i];
            }
            else if(arr[i]>t) {
                t = arr[i];
            }
        }
        cout<<"The largest no are: "<<f<<s<<t;
    }
}
int main(){
    int num;
    int arr[num];
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    largest_of_three(arr,num);
}

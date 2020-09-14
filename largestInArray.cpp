#include <iostream>
using namespace std;
int main(){
        cout<<"Enter n: ";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the numbers: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
        int largest = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>arr[0]){
            largest = arr[i];
        }
    }
    cout<<largest;
}

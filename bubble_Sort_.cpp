/* Bubble sort new method .*/
#include<iostream>
using namespace std;
int main(){
    int arr[1000];
    int n;
    cout<<"How many no. you have ? : ";
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<"Enter no. "<<i+1<<" : ";
        cin>>arr[i];
    }

    for(int i=n-2;i>=0;i--){
        for(int  j=0;j<=i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
}

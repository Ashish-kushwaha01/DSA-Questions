/* Ascending order of an array by bubble sort using least no. */
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

    for(int i=0;i<n-1;i++){
        for(int j=n-1;j>i;j--){
            if(arr[j]<arr[j-1])
            swap(arr[j],arr[j-1]);
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
}

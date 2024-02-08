/* Sorting of array using bubble sort .*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter that how many no. you have ? : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter no. "<<i+1<<" : ";
        cin>>arr[i];
    }
    for(int i=n-1; i>=0;i--){
        for(int j=0;j<=i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"Ascending order of your no. is  : ";
    for(int i=0;i<n;i++){
        cout<< " "<<arr[i]<<" ";
    }
}
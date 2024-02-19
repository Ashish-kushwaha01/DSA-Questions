/* Array in decreasing order using bubble sort .*/
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
        bool swapped=0;
        for(int j=n-1;j>i;j--){
            if(arr[j]>arr[j-1]){
            swap(arr[j],arr[j-1]);
            // int temp=arr[j];
            // arr[j]=arr[j+1];
            // arr[j+1]=temp;
            swapped=1;
        }
        }
        if(swapped=0)
        break;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
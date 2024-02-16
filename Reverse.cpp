/* Reverse of given array .*/
#include<iostream>
using namespace std;
int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        cout<<"Enter no. "<<i+1<<" : ";
        cin>>arr[i];
    }

    int i=0,j=9;
    while (i<j)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }

    cout<<"After reversing my array elements are : ";
    for(int i=0;i<10;i++){
        cout<<arr[i];
    }
    return 0;
}
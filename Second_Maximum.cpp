/* Find second maximum in an array without sorting an array .*/
#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        cout<<"Enter no. "<<i+1<<" : ";
        cin>>arr[i];
    }

    int maximum=INT_MIN;
    int max=INT_MIN;

for(int i=0;i<10;i++){
    if(arr[i]>max)
    max=arr[i];
}

for(int i=0;i<10;i++){
    if(arr[i]>maximum && arr[i]!=max)
    maximum=arr[i];
}

cout<<"Second maximum element is : "<<maximum;
}
/* find minimum no. using INT_MAX .*/
/* find maximum no. in your array using INT_MIN*/
#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[10]={3,3,5,3,4,5,3,4,2,6};
    int index=0;
    int min= INT_MAX;
    for(int i=0;i<10;i++){
        if(arr[i]<min)
        min=arr[i];
        index=i;
    }
    cout <<"Minimum element of my array is : ";
    cout<<min<<"\n";
    cout<<"Index of my minimum element is : ";
    cout<<index<<"\n";

    cout<<sizeof(arr);

    bool rest;
    cout<<"\n"<<sizeof(rest);
}
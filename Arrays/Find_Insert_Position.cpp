/* Find what is the perfect position of my target by which my given array is sorted . */

#include<iostream>
using namespace std;
int Find_Index(int arr[],int n,int p){

    int start=0,end=p-1,mid;
    int index=p;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==n)
        return mid;
        else if(arr[mid]>n){
            index=mid;
            end=mid-1;       //  3 4 5 6 7      1 
        }
        else start=mid+1;
    }
    return index;
}

int main(){
    int n;
    cout<<"Enter how many no. you have : ";
    cin>>n;

    int arr[n];
    cout<<"Enter your no. : ";
    cout<<"\n";
    for(int i=0;i<n;i++){
        cout<<"Enter no. "<<i+1<<" : ";
        cin>>arr[i];
    }

    cout<<"\n\n";

    cout<<"Your no are : ";
    for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
    }

    cout<<"\n\n";
    int target;
    cout<<"Enter your target : ";
    cin>>target;
    cout<<"\n\n";
    cout<<"Index of your target is : ";
    cout<<Find_Index(arr,target,n);

}
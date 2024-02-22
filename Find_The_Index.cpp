/* Find the index of my given element in a sorted array */
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,4,5,6,8,10,11};
    int mid;
    int start=0;
    int end=6;
    int k;
    cout<<"Enter your target value  : ";
    cin>>k;
cout<<"\n";

if(arr[end]<k)
        cout<<end+1;
        else{
    while(start<=end){
        mid=start+(end-start)/2;
        
       
        if(arr[mid-1]<=k && arr[mid]>=k)
        {
            cout<<mid;
            break;
        }
        else if(arr[mid]>k)
        end=mid-1;
        else
        start=mid+1;
    }
        }
}
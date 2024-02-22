/* Search insert position of my given no. */
#include<iostream>
using namespace std;
int main(){
    int arr[6]={2,5,7,7,8,8};
    int start=0,end=5,index=6;
    int mid;
    int k;
    cout<<"Enter your value : ";
    cin>>k;
    while (start<=end)
    {
       mid=start+(end-start)/2;
       if(arr[mid]==k)
       {index=mid;
      break;
       }
       else if (arr[mid]<k){
        
        start=mid+1;
       }
       else {
        index=mid;
        end=mid-1;
       }
       
    }
    cout<<index;
}
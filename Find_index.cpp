/* Find First and Last Position of Element in Sorted Array Using Binary search.
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your no. : ";
    cin>>n;
    int arr[1000];

    for(int i=0;i<n;i++){
        cout<<"Enter no. "<<i+1<< " : " ;
        cin>>arr[i];
    }

    cout<<"My no. is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

    int k;
    cout<<"Enter your target : ";
    cin>>k;
    cout<<"\n";

int first=-1;
int last=1;
    int start=0,end=n-1,mid;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]==k){
            first=mid;
            end=mid-1;        
    }
    else if(arr[mid]<k){
        start=mid+1;
    }
    else{
        end=mid-1;
    }
    }

    start=0,end=n-1,mid;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]==k){
            last=mid;
            start=mid+1;        
    }
    else if(arr[mid]<k){
        start=mid+1;
    }
    else{
        end=mid-1;
    }
    }
    cout<<"First and last index of my target is : "<<first <<" and "<<last;
    return 0;

}
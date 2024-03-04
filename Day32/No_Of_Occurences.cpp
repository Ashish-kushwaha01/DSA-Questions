/* Find how many times my repeated no. comes .*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;
int repeat(vector<int>a,int n){
    int start=0,end=a.size()-1,mid;
    int first=-1;
    // for finding first index ;
    while(start<=end){
        mid=end+(start-end)/2;
        if(a[mid]==n){
            first=mid;
            end=mid-1;
        }
        else if(a[mid]>n){
            end=mid-1;
        }
        else start=mid+1;
    }

    // for finding last index ;
    int last=-1;
      start=0,end=a.size()-1,mid;

    while(start<=end){
        mid=end+(start-end)/2;
        if(a[mid]==n){
            last=mid;
          start=mid+1;
        }
        else if(a[mid]>n){
            end=mid-1;
        }
        else start=mid+1;


    }

    if( first == -1 && last ==-1  )
    return -1;
    else 
    return last-first+1;
}
int main(){
    int n;
    cout<<"Enter that how many no. you have : ";
    cin>>n;
    cout<<" \n\n";
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cout<<"Enter no. "<<i+1<<" : ";
        cin>>arr[i];
    }

    cout<<"Your no. are : ";
    for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
    }
    cout<<" \n\n";

int target;
cout<<"Enter your target(which no do you want to search ? ) : ";
cin>>target;
    cout<<" \n\n";
    cout<<"Total no. of Occurences is  : ";
   cout<<repeat(arr,target);

    return 0;
}
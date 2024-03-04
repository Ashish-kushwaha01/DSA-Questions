/* Find first and last index of my repeated elements in my sorted array . */
#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;
void repeat(vector<int>a,int n){
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

    cout<<first<<" & "<<last;

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
    cout<<" first and last index of my repeated elements in my sorted array : ";
   repeat(arr,target);

    return 0;
}
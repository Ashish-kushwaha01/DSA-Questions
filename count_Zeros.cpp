/* In a sorted array count that what is the occurence of my given no. */
#include<iostream>
using namespace std;
int main(){
    int arr[]={0,0,0,0,0,2,2,2,3,4,4,5,5,5,5,8,9};

    int start=0,end=17,mid,first=-1;
    while (start<=end){
        mid=start+(end - start)/2;
        if(arr[mid]==0){
            first=mid;
            end=mid-1;
        }
        else if (arr[mid]<0){
            start=mid+1;
        }
        else {
            end=mid-1;
        }
    }

    cout<<first ;

    start=0,end=17,mid;
    int last=-1;
    while (start<=end){
        mid=start+(end - start)/2;
        if(arr[mid]==0){
            last=mid;
            start=mid+1;
        }
        else if (arr[mid]<0){
            start=mid+1;
        }
        else {
            end=mid-1;
        }
    }

    cout<<last ;

    cout<<"Total no. is : "<<last-first+1;

}
/* Find index of minimum element in my rotated sorted array .*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int Minimum(vector<int>a){
    int index=0;
    int start=0,end=a.size()-1,mid;
    while(start<=end){
        mid=end+(start-end)/2;
        if(a[mid]<a[mid-1] && a[mid]<a[mid+1] )
        return mid;
        else if (a[mid]>a[0])
        start=mid+1;
        else{
            index=mid;
            end = mid-1;
        }
    }
    return index ;
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

    cout<<"Index of my minimum element in my rotated sorted array is : ";

    cout<<Minimum(arr);
}
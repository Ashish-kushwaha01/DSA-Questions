/* Linear Search */
#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;
int Linear_Search(int arr[],int n, int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target)
        return i;
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter that how many no. you have : ";
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++){
        cout<<"Enter no. "<<i+1<<" : ";
        cin>>arr[i];
    }
    cout<<" \n\n";
    cout <<"Your no. are : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<" \n\n";

    int p;
    cout<<"Enter which no. you want to search : ";
    cin >>p;
    cout<<" \n\n";

    cout<<"Index of your no. is : ";
    cout<<Linear_Search(arr,n,p);
    return 0;
}
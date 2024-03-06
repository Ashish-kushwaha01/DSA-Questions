 /* Binary Search */
 #include<iostream>
 #include<vector>
 #include<algorithm>
 #include<limits.h>
 using namespace std;
 int Binary_Search(int arr[],int n,int target){
    int start=0,end=n-1,mid;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==target)
        return mid;
        else if(arr[mid]>target)
        end=mid-1;
        else start=mid+1;
    }
    return -1;
 }
 int main(){
    int n,arr[1000],target;
    cout<<"Enter that how many no. you have : ";
    cin>>n;
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

    cout<<"Enter which no. you want to search : ";
    cin >>target;
    cout<<" \n\n";

    cout<<"Index of your no. is : ";
    cout<<Binary_Search(arr,n,target);
    return 0;
 }
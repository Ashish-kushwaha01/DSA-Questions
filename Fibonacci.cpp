/* find fibonacci upto n term .*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter that how many term you want to print ? : ";
    cin>>n;
    int arr[n];
    arr[0]= 0;
    arr[1]=1;
    for(int i=2;i<n;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    cout<<"My fibonacci series is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
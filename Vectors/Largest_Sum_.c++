/* Find largest sum of my subarray with bruteful approach .*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;
int largest(vector<int>arr){
    int n=arr.size();
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        int prefix=0;
        for(int j=i;j<n;j++){
            prefix+=arr[j];
            maxi=max(maxi,prefix);
        }
    }
    return maxi;
}
int main(){
    int n;
    cout<<"Enter how many no. you have : ";
    cin>>n;
    cout<<"\n\n";

    vector<int>a(n);
    for(int i=0;i<n;i++){
        cout<<"Enter no. "<<i+1<<" ";
        cin>>a[i];
    }

    cout<<"\n\n";
    cout<<"Your no. are : ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
        cout<<"\n\n";

    cout<<largest(a);
}